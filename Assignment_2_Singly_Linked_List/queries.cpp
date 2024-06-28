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
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countSize(Node* head) {
    Node* temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node*& head, Node*& tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node*& head, Node*& tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteNodeFromIndex(Node*& head, Node*& tail, int index) {
    if (head == NULL) return;

    int llSize = countSize(head);
    if (index >= llSize || index < 0) return;

    if (index == 0) {
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; ++i) {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (temp->next == NULL) tail = temp;
    delete deleteNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int query;
    cin >> query;

    while (query--) {
        int method, v;
        cin >> method >> v;
        if (method == 0) {
            insertAtHead(head, tail, v);
        } else if (method == 1) {
            insertAtTail(head, tail, v);
        } else if (method == 2) {
            deleteNodeFromIndex(head, tail, v);
        }
        printLinkedList(head);
    }

    return 0;
}