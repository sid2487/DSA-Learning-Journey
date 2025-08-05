#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public: 
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

// delete the head of a linklist
Node* deleteHead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}


int main(){
    vector <int> arr = {15,2,8,9,5};
    
    return 0;
}