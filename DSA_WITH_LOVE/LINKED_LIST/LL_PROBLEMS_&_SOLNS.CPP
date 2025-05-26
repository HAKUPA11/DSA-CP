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