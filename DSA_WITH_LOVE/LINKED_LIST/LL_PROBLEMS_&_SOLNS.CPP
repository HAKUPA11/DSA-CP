// LINK FOR THE PROBLEM:
// https://www.geeksforgeeks.org/problems/print-linked-list-elements/1?page=1&category=Linked%20List&difficulty=Basic&sortBy=submissions
// PROBLEM NAME: PRINT LINKED LIST 
// SOLN:
//        Node* crnt = head;
//         while(crnt!=nullptr){
//             cout<<crnt->data<<" ";
//             crnt=crnt->next;
//         }



// LINK:
// // https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&category=Linked%20List&difficulty=Basic&sortBy=submissions
// PROBLEM: LINKED LIST INSERTION AT THE END
// SOLN:
//  Node* last=new Node(x);
        
//         if (head == NULL) {
//         return last;
//         }//just for an edge case ki , if your ll is null then to handle that
        
//         Node* crnt = head;
//         while(crnt->next!=NULL){
//             crnt=crnt->next;//to advance the loop agay bhadne ke liye
//         }//after traversing we have reached at the end of the ll
//         // now join the "last" node to the "crnt" and return head
//         crnt->next=last;
//         return head;


// LINK:
// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&category=Linked%20List&difficulty=Basic&sortBy=submissions
// PROBLEM:COUNT LINKED LIST NODES
// SOLN:
    // int getCount(struct Node* head) {
    //     int cnt=0;
    //     while(head){
    //         cnt++;
    //         head=head->next;
    //     }
    //     return cnt;
    // }



// LINK:
// https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category=Linked%20List&sortBy=submissions
// PROBLEM: REVERSE A LINKED LIST
// SOLN:i made a new data structure(here vector, you can use stack also)and then store the data of linkedlist into vector
// i have made a new linkedlist and inserted the data from the back of the recent made vector however
// there was no need to make a new linkedlist you can just change the data of older linkedlist only
// METHOD 1:
// SPACE COMPLEXITY WOULD BE IN THAT CONDN O(N)

//     Node* reverseList(struct Node* head) {
//         vector<int>v;
//         int cnt=0;
//         while(head){
//             v.push_back(head->data);
//             cnt++;
//             head=head->next;
//         }
//         Node* new_head = new Node(v[cnt-1]);
//         Node* new_crnt = new_head;
//         for(int i=1;i<v.size();i++){
//             new_crnt->next = new Node(v[(cnt-i)-1]); 
//             new_crnt=new_crnt->next;
//         }
//         return new_head;
//     }

METHOD-2:
