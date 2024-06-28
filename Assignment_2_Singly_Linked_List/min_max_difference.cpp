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
        cout<<"0"<<endl;
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
void calculateDifferenceOfMaxMin(Node*head){
   int min=INT_MAX;
   int max=INT_MIN;
   Node*temp=head;
   while(temp!=NULL){
    if(temp->val>max){
        max=temp->val;
    }
    if(temp->val<min){
        min=temp->val;
    }
    temp=temp->next;
   }
   int diffValue=max-min;
   cout<<diffValue<<endl;
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
    calculateDifferenceOfMaxMin(head);
   
    return 0;
}