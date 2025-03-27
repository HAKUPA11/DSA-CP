#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* convert_ar_to_ll(int ar[], int n){
    if(n==0)
        return nullptr;
    
    Node* head = new Node(ar[0]);
    Node* current = head;

    for(int i=1;i<n;i++){
        current->next = new Node(ar[i]);
        current = current->next;
    }

    return head;
}

void print_ll(Node*head){
    Node* current = head;
    // cout<<endl;
    while(current!= nullptr){
        cout<<current->data<<" -> ";
        current = current->next;
    }
    cout<<"nullptr";
    
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    Node* head =  convert_ar_to_ll(ar, n);
    print_ll(head);
}