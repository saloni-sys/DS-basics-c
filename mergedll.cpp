#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* prev;

    Node(int x) {
        val = x;
        next = prev = NULL;
    }
};

// 👉 YOU WILL WRITE THIS FUNCTION
Node* merge(Node* l1, Node* l2) {
    // write your logic here
    Node* returnNode=new Node(INT_MIN);
    Node* headNode=returnNode;

    while(l1!=NULL &&l2!=NULL){
        if(l1->val<=l2->val){
        returnNode->next=l1;
        l1->prev=returnNode;
        l1=l1->next;
        }else{
            returnNode->next=l2;
            l2->prev=returnNode;
            l2=l2->next;
        }
        returnNode=returnNode->next;
       
    }
    if(l1!=NULL){
        returnNode->next=l1;
        l1->prev=returnNode;
    }else if(l2!=NULL){
        returnNode->next=l2;
        l2->prev=returnNode;
    }

    //remove dummy node
      // remove dummy node
    Node* result = headNode->next;
    if(result != NULL) result->prev = NULL;

    return result;
}

// helper to print DLL
void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // List 1: 1 ⇄ 3 ⇄ 5
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->prev = l1;
    l1->next->next = new Node(5);
    l1->next->next->prev = l1->next;

    // List 2: 2 ⇄ 4 ⇄ 6
    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->prev = l2;
    l2->next->next = new Node(6);
    l2->next->next->prev = l2->next;

    Node* result = merge(l1, l2);

    printList(result);

    return 0;
}