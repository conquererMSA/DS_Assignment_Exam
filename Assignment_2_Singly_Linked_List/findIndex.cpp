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

int findIndex(Node* head, int v) {
    Node* start = head;
    int index = 0;
    while (start != NULL) {
        if (start->val == v) {
            return index;
        }
        start = start->next;
        index++;
    }
    return -1;
}

void clearList(Node*& head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        Node* head = NULL;
        Node* tail = NULL;
        while (true) {
            int v;
            cin >> v;
            if (v == -1) break;
            insertAtTail(head, tail, v);
        }
        int x;
        cin >> x;
        cout << findIndex(head, x) << endl;
        clearList(head);
    }
    return 0;
}