#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void printLinkedList(Node*&head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Linked List is empty!"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int countSize(Node*head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertAtHead(Node*&head,Node*&tail, int v){
    Node* newNode=new Node(v);
    head=newNode;
    tail=newNode;
    return;
}
void insertAtTail(Node*&head,Node*&tail, int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        insertAtHead(head,tail,v);
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void removeDuplicates(Node*& head) {
    Node* start = head;
    while (start != NULL) {
        Node* startNext = start;
        while (startNext->next != NULL) {
            if (startNext->next->val == start->val) {
                Node* duplicate = startNext->next;
                startNext->next = startNext->next->next;
                delete duplicate;
            } else {
                startNext = startNext->next;
            }
        }
        start = start->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head,tail,v);
    }
    removeDuplicates(head);
    printLinkedList(head);

    return 0;
}