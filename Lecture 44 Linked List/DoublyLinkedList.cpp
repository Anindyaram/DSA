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
    ~node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory of node is free with data : "<<value <<endl;
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
void insertAtHead(node* &tail,node* &head , int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }else{
        node* newNode = new node(d);
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
    }
}

void insertTail(node* &tail,node* &head, int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }else{
        node* newnode = new node(d);
        newnode->pre = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

void insertAnyposition(node* &tail,node* &head , int position ,int d){
    //position is 1st element
    if(position == 1){
        insertAtHead(tail ,head ,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    //travelling to particular position
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    //position is last element
    if(temp->next == NULL){
        insertTail(tail ,head ,d);
        return;
    }
    //inserting at new node at given position
    node* newnode = new node(d);

    newnode->next = temp->next;
    temp->next->pre = newnode;
    temp -> next = newnode;
    newnode->pre = temp;

}

//Deletion in Doubly LL
void deleteNode(node* &head , int position){
    //Deleting starting node
    if(position == 1){
        node* temp = head;
        temp->next->pre = NULL;
        head = temp->next;
        //memory freeing
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any node or last node
        node* curr = head;
        node* prev = NULL;
        int counter = 1;
        while(counter < position){
            prev = curr;
            curr = curr->next;
            counter++;
        }
        
        curr->pre = NULL;
        prev->next = curr->next;
        curr->next  = NULL;
        delete curr;
    }
}

int main(){
    // node* node1 = new node(3);
    // node* head = node1;
    // node* tail = node1;
    node* head = NULL;
    node* tail = NULL;
    //head insertion
    insertAtHead(tail ,head , 21);
    printNode(head);
    insertAtHead(tail,head,4);
    printNode(head);
    //tail insertion
    insertTail(tail ,head , 6);
    printNode(head);
    insertTail(tail ,head ,11);
    printNode(head);
    //particular position insertion
    insertAnyposition(tail,head,3,101);
    printNode(head);
    // cout<<"Size of Doubly LInked List: "<<getLength(head)<<endl;

    deleteNode(head ,1);
    printNode(head);
    cout << "Head "<<head->data<<endl;
    cout << "tail "<<tail->data<<endl;
    deleteNode(head,2);
    printNode(head);
    cout << "Head "<<head->data<<endl;
    cout << "tail "<<tail->data<<endl;
    deleteNode(head ,3);
    printNode(head);
    cout << "Head "<<head->data<<endl;
    cout << "tail "<<tail->data<<endl;
}