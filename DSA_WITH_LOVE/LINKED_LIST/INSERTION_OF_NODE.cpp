#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*  next;

    Node(int value){
        data = value;
        next=nullptr;
    }
};


//F X N   T O   A D D   N O D E   A T   B E G I N N I N G
Node* add_node_at_begin(Node* head){
    int new_num;
    cin>>new_num;
    Node* new_node = new Node(new_num);
    new_node->next = head;
// you may have doubt that which line of code states that the after 
// new_node pointing to 10 head should point to new_node because there is no such line in the code 
    return new_node;// this line returns new_node and in the main function this value is assigned to head!
}

//F X N   T O   A D D   N O D E   A T   E N D   
Node* add_node_at_end(Node*head){
    int new_num;
    cin>>new_num;
    Node* new_node = new Node(new_num);
    Node* current = head;
    if(current==nullptr){
        return new_node;
    }
    while(current->next!=nullptr){
            current->next=current;
    }
    // after this loop the current has been updated to the last node
    current->next = new_node;
    return head;

}

//F X N  T O  P R I N T
void print_ll(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data;
        temp=temp->next;
        if(temp==nullptr)
        break;
        cout<<" -> ";
    }
}


int main(){
    int size;
    cin>>size;
    int first_num, other_num;
    cin>>first_num;
    Node* head = new Node(first_num);
    Node* current = head;

    for(int i=1;i<size;i++){
        cin>>other_num;
        current->next = new Node(other_num);
        current = current->next;
    }
    
    print_ll(head);
    // head = add_node_at_begin(head);
    // print_ll(head);
    head = add_node_at_end(head);
    print_ll(head);
}

// T H E O R Y   F O R   I N S E R T I O N    A T    B E G I N
// Step-by-Step Breakdown

// Step 1: Before Insertion
// The linked list before inserting a new node (5):

// HEAD (5000)
//    |
//    v
// [10 | 2000] → [20 | 3000] → [30 | NULL]
//  (1000)       (2000)       (3000)

// 🔹Each box represents a Node object: [data | next]
// 🔹 Memory address (in parentheses) represents where each node is stored in memory.
// 🔹 The next pointer stores the memory address of the next node.


// Step 2: User Inputs a New Value
// The user enters 5, and we create a new node at memory address 4000:
// [5  | NULL]  (4000)
// Right now, this node is independent.


// Step 3: Link New Node to Head
// The statement:
// new_node->next = head;
// makes 5 point to 10, updating its next pointer to 1000 (the old head’s memory address):
// [5  | 1000] → [10 | 2000] → [20 | 3000] → [30 | NULL]
//  (4000)       (1000)       (2000)       (3000)


// Step 4: Update Head
// Now, we update head = new_node;, making head point to the new node (5 at 4000):
// HEAD (4000)
//    |
//    v
// [5  | 1000] → [10 | 2000] → [20 | 3000] → [30 | NULL]
//  (4000)       (1000)       (2000)       (3000)

// Final Visualization
//        HEAD (4000)
//          |
//          v
//    +----+-------+
//    | 5  | 1000  |  --->  +----+-------+
//    +----+-------+        | 10 | 2000  |  --->  +----+-------+
//                          +----+-------+        | 20 | 3000  |  --->  +----+------+
//                                               +----+-------+        | 30 | NULL |
//                                                                      +----+------+


// Q U E S T I O N--when we update the new_node'next with head then it should point to head why does it directly point to the node where 10 is there as data
// ChatGPT said:
// ChatGPT
// Great question! Let's clarify why new_node->next = head; makes new_node->next point directly to the node containing 10, rather than pointing to head itself.

// Understanding head in Memory
// In C++, head is a pointer that stores the memory address of the first node in the linked list.

// Let's assume:

// head = 1000 (i.e., the node with 10 is stored at memory address 1000).
// Before Execution of new_node->next = head;
// When we create new_node, it has:

// new_node (4000)  →  [5  | NULL]
// Its next pointer is initially nullptr.

// head is pointing to 10:

// head (1000)  →  [10 | 2000] → [20 | 3000] → [30 | NULL]

// Step-by-Step Execution

// Step 1: Assigning new_node->next = head;

// new_node->next = head;
// Here’s what happens:

// head stores the address 1000 (which points to [10]).
// Assigning head to new_node->next copies this address to new_node->next.
// Now new_node->next also holds 1000, meaning it now points to the same node that head was pointing to.
// After execution:


// new_node (4000)  →  [5  | 1000] 
//                              ↓
//                    [10 | 2000] → [20 | 3000] → [30 | NULL]
// Key Understanding
// head itself is just a pointer (storing 1000).
// When we do new_node->next = head;, we're copying the value of head (1000) into new_node->next.
// So new_node->next stores 1000, which means it points directly to [10], NOT to head itself.
// If head were later changed, new_node->next would still point to [10].
// Why Doesn't new_node->next Point to head?
// head is just a variable storing the address of 10 (1000).
// Pointers store addresses, not variables.
// When we assign head to new_node->next, we copy the address 1000, which points to 10.
// Thus, new_node->next directly points to [10] in memory, not the variable head.
// Final Updated Linked List

// HEAD (4000)
//    |
//    v
// [5  | 1000] → [10 | 2000] → [20 | 3000] → [30 | NULL]
//  (4000)       (1000)       (2000)       (3000)
// Key Takeaway:
// ✅ new_node->next = head; does not link to head itself but to the node head was pointing to.
// ✅ This works because head contains the memory address of [10], which gets copied into new_node->next.

// Would you like me to add a dry run to demonstrate this with actual values? 😊


// Here’s a detailed diagram with arrows and pointers showing how the linked list updates step by step when inserting a new node at the beginning.

// Step 1: Initial Linked List (Before Insertion)
// Assume the linked list contains:
// 10 → 20 → 30
// head is pointing to the node containing 10 at memory address 1000.

// head (1000)
//    |
//    v
// +------+--------+    +------+--------+    +------+--------+
// | 10   | 2000   | -> | 20   | 3000   | -> | 30   | NULL   |
// +------+--------+    +------+--------+    +------+--------+
//  (1000)            (2000)            (3000)

// Step 2: User Enters a New Value (5)
// A new node is created at memory address 4000.

// new_node (4000)
//    |
//    v
// +------+--------+
// |  5   | NULL   |
// +------+--------+
// Step 3: Assign new_node->next = head;
// Before this step:
// head points to 1000 (node containing 10).
// Executing new_node->next = head;:
// new_node->next is assigned the value of head (1000).
// This means new_node now points to the same node that head was pointing to (10 at 1000).

// new_node (4000)
//    |
//    v
// +------+--------+    +------+--------+    +------+--------+
// |  5   | 1000   | -> | 10   | 2000   | -> | 20   | 3000   | -> [30 | NULL]
// +------+--------+    +------+--------+    +------+--------+
//  (4000)            (1000)            (2000)            (3000)
// Step 4: Update head = new_node;
// head is now updated to point to 4000 (where new_node is stored).
// Now 5 becomes the new head.

// head (4000)
//    |
//    v
// +------+--------+    +------+--------+    +------+--------+    +------+--------+
// |  5   | 1000   | -> | 10   | 2000   | -> | 20   | 3000   | -> | 30   | NULL   |
// +------+--------+    +------+--------+    +------+--------+    +------+--------+
//  (4000)            (1000)            (2000)            (3000)
// Final Linked List Structure

// HEAD (4000)
//    |
//    v
// [5  | 1000] → [10 | 2000] → [20 | 3000] → [30 | NULL]
//  (4000)       (1000)       (2000)       (3000)










