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
int countSize(Node*head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void checkTwoLLsEachValue(Node* &ll1, Node* &ll2){
    Node* temp1=ll1;
    Node* temp2=ll2;
     int ll1Size=countSize(ll1);
     int ll2Size=countSize(ll2);
     int same=1;
     if(ll1Size==ll2Size){
        for(int i=1; i<=ll1Size; i++){
            if(temp1->val!=temp2->val){
                same=0;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(same==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
     }else{
        cout<<"NO"<<endl;
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
    Node* head2=NULL;
    Node* tail2=NULL;
    while(true){
        int v;
        cin>>v;
        if(v==-1) break;
        insertAtTail(head2, tail2, v);
    }
    checkTwoLLsEachValue(head,head2);
    return 0;
}