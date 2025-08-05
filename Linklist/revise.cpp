#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int lengOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* deleteTailOfLL(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}



int main(){
    vector <int> arr = {2,4,5,9,1};
    Node* head = convertArr2LL(arr);
    // cout << head->data << endl;

    // printLL(head);
    cout << lengOfLL(head) << endl;
    cout << checkIfPresent(head, 9) << endl;

    // head = deleteHead(head);
    // head = deleteTailOfLL(head);
    printLL(head);

    // // traverse an array
    // Node* temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }




    return 0;
}