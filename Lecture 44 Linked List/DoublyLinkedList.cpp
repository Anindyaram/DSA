#include<iostream>
using namespace std;

//Created Doubly LL
class node{
public:
    int data;
    node* pre;
    node* next;

    node(int d){
        this->data = d;
        this->pre = NULL;
        this->next = NULL;
    }
};

//Traversing Doubly LL
void printNode(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
//Length of Doubly LL
int getLength(node* head){
    int len = 0 ;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//Insertion in Doubly LL
void insertAtHead(node* &head , int d){
    node* newNode = new node(d);
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}

void insertTail(node* &tail , int d){
    node* newnode = new node(d);
    newnode->pre = tail;
    tail->next = newnode;
    tail = newnode;
}

int main(){
    node* node1 = new node(3);
    node* head = node1;
    node* tail = node1;
    printNode(head);
    insertAtHead(head , 21);
    printNode(head);

    insertTail(tail , 6);
    printNode(head);
    insertTail(tail , 11);
    printNode(head);
    cout<<"Size of Doubly LInked List: "<<getLength(head)<<endl;
}