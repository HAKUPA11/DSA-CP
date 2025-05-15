#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};


//FORMATION OF DLL
Node* array_to_dll(int arr[], int num){

    Node* head = new Node(arr[0]);
    Node* crnt = head;

    for(int i=1;i<num;i++){
        Node* newNode = new Node(arr[i]);
        crnt->next = newNode;
        newNode->prev = crnt;
        crnt = newNode;
    }
    return head;
}

//F X N   T O   P R I N T    T H E    D L L    I N     F O R W A R D    D I R E C T I O N
void print_forward(Node* head, int num){
    Node* temp = head;
    cout<<"DOUBLY LL IN FORWARD DIRECTION: ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

//PISSED OFF BEATS SCARED EVERYTIME

//FXN TO PRINT THE DLL IN REVERSE DIRECTION
void print_reverse(Node* head){
    Node* temp = head;
    cout<<"DOUBLY LL IN REVERSE DIRECTION: ";
    while(temp->next){
        temp=temp->next;//just to visit to the last node
    }
    while (temp)
    {
        cout<<temp->data<<"->";
        temp=temp->prev;
        
    }
    
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0;i<num;i++){
        cin>>arr[i];
    }
    Node* head = array_to_dll(arr, num);
    // print_forward(head, num);
    print_reverse(head);
}