#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertionAtHead(Node* &head,int d){
    //new node created
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertionAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* tail=node1;
   // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head=node1;
    print(head);
    insertionAtTail(tail,13);
    print(head);
    insertionAtHead(head,12);
    print(head);

    return  0;
}