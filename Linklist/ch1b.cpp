// converting an array to linkelist
#include <bits/stdc++.h>
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

    public: 
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

    Node* convertArr2LL(vector<int> &arr){
        Node *head = new Node(arr[0]); // Create a new Node from the first element of the array, and call it head
        Node *mover = head; // Let’s create another pointer called mover which points to the same first node (head).
        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp; // Make the next of the current node (mover) point to the newly created node (temp) — thereby connecting them.
            mover = temp;
        }
        return head;
    }

    int lengthOfLL(Node* head){
        int cnt = 0;
        Node* temp = head;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }

    int checkIfPresent(Node* head, int val){
        Node* temp = head; // (we are declaring a pointer temp to Node and =head means we are initializing this pointer to point to the same Node as head is pointing to.)
        while(temp){
            if(temp->data == val) return 1;
            temp = temp->next; // Move to the next node in the list by updating the pointer temp.
        }
        return 0;
    }

int main(){

    vector <int> arr = {12,5,8,6};
    Node *head = convertArr2LL(arr); // head is a pointer to a Node object and That object contains two things: data and next.
    cout << head->data << endl;  // Access the data field from the node that head is pointing to

    // travese an array
    Node *temp = head; // make temp point to the same node that head is pointing too(temp and head are pointing to the same Node in memory.)
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    cout << lengthOfLL(head) << endl;

    cout << checkIfPresent(head, 15) << endl;


    return 0;
}

// mover->next = temp;
// What’s happening?
// mover is pointing to the last node created (initially the head node).
// temp is a brand-new node holding the next value (e.g., 5).
// By doing mover->next = temp;, you're connecting the current node (mover) to the new node (temp).