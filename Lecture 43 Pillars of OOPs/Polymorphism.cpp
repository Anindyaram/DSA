/*
Polymorphism - single thing with mutiple forms;
Types of Polymorphism - 
    1> Compile Time Polymorphism
        Types of CTP-
            1> Funtion Overloading
            2> Operator Overloading
    2> Run Time Polymorphism;
*/
#include<iostream>
using namespace std;

class poly
{
public:
    void he(){
        cout<<"HEHEHEHEHEHEHEHEH"<<endl;
    }
    void he(string a){
        cout<<a<<" HAHAHAHAHAHHAHAHA!!";
    }
};

int main(){
    poly be;
    be.he();
    be.he("Person");

    return 0;
}
