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

//D E L E T I N G   H E A D / F I R S T  N O D E
Node* delete_head(Node*head){
    if(head == nullptr){
        return nullptr;
    }
    Node* current = head;
    head = head->next;
    delete current;
    return head;
}

// P R I T I N G
void print_ll(Node* head){
    Node* current = head;
    while(current!=nullptr){
        cout<<current->data;
        current = current->next;
        if(current==nullptr){
            break;
        }
        cout<<" -> ";
    }
    cout<<endl;
}

int main(){
    int size, num;
    cin>>size>>num;
    Node* head = new Node(num);
    Node* current = head;
    for(int i=1;i<size;i++){
        cin>>num;
        current->next = new Node(num);
        current = current->next;
    }
    print_ll(head);
    head = delete_head(head);
    print_ll(head);

}