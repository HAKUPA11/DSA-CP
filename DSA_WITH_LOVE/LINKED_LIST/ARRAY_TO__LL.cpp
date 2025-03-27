#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
            data=value;
            next=nullptr;
    }
};

void print_arr(int arr[], int num){
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}

Node* array_to_ll(int arr[], int num){
    if(num==0)
    return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for(int i=1;i<num;i++){
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

void print_ll(Node* head){
    Node* current = head;
    cout<<endl;
    // this code is for not printing nullptr and iss arrow -> se bachne ke liye at the end
    // Node* temp = head;
    // while(temp!=nullptr){
    //     if(temp->next == nullptr){
    //         cout<<temp->data;
    //         break;
    //     }
    //     cout<<temp->data;
    //     temp=temp->next;
    //     cout<<" -> ";
    // }
    while(current != nullptr){
        cout<<current->data<<" -> ";
        current=current->next;
    }
    cout<<"nullptr";
}

void deleteLinkedList(Node* &head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0;i<num;i++){
        cin>>arr[i];
    }

    print_arr(arr, num);
    Node* head = array_to_ll(arr, num);
    print_ll(head);


}

