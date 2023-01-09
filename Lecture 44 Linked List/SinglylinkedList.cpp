#include<iostream>
using namespace std;

//Created node for linked list
class node{
public:
    int data;
    node* next;

    //Constructor
    node(int n){
        this->data = n;
        this->next = NULL; 
    }
};

//Insertion in linked list
void insertAtTail(node* &tail , int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = tail->next;

}

void inserthead(node* &head , int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertPosition(node* &tail , node* &head,int position,int data){
    node* temp = head;
    int counter = 1;

    //inserting at first position 
    if(position == 1){
        inserthead(head , data);
        return;
    }
    //finding the correct postion to insert element
    while(counter<position - 1){
        temp = temp->next;
        counter++;
    }
    //inserting at end
    if(temp->next == NULL){
        insertAtTail(tail , data);
    }

    //creating the node to insert
    node *newnode = new node(data);
    newnode->next = temp->next;
    temp->next = newnode; 
}

void printLinkedList(node* &head){
    node* temp = head;
    while(temp != NULL){
        // cout<<"Data="<<temp->data<<"    Address="<<temp->next<<"    Node address="<<temp<<endl;
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    //Created new node
    node* node1 = new node(23);
    // cout<<node1->data<<"\n";
    // cout<<node1->next<<"\n";
    //created head pointing to first element
    node *head = node1;
    node *tail = node1;

    printLinkedList(head);
    inserthead(head , 3);
    printLinkedList(head);

    inserthead(head,12);
    printLinkedList(head);

    insertAtTail(tail,3);
    printLinkedList(head);

    inserthead(head , 11);
    printLinkedList(head);
    //Inserting at a particular position
    insertPosition(tail , head , 3 , 100);
    printLinkedList(head);
    cout << "Head : "<<head->data<<endl;
    cout << "Tail : "<<tail->data<<endl;

}

