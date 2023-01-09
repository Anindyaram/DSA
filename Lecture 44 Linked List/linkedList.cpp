#include<iostream>
using namespace std;

//Created node for linked list
class Node{
public:
    int data;
    Node* next;

    //Constructor
    Node(int n){
        this->data = n;
        this->next = NULL; 
    }
};

int main(){
    Node* node1 = new Node(23);
    cout<<node1->data<<"\n";
    cout<<node1->next<<"\n";
}

