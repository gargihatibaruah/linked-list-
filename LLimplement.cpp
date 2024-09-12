#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int x){//constructor
data=x;
next=NULL;
}
};
void printList(Node* head){
    Node* current=head;
    while (current != NULL) {  // Traverse the list
        cout << current->data << " ";  // Print data of each node
        current = current->next;  // Move to the next node
    }
    cout << endl;
    }
int main(){
Node* head=new Node(10); //head node
Node* temp1=new Node(20);
Node* temp2=new Node(30);
head->next=temp1;
temp1->next=temp2;
printList(head);
//shorter implementation: node *head=new node(20); head->next=new node(30); head->next->next=new node(40); //
return 0;
}