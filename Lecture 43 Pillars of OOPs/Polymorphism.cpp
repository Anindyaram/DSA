/*
Polymorphism - single thing with mutiple forms;
Types of Polymorphism - 
    1> Compile Time Polymorphism (Static polymorphism)
        Types of CTP-
            1> Funtion Overloading
            2> Operator Overloading
    2> Run Time Polymorphism - depends on inheritence;
        Types of RTP-
            1> Method Overriding - 
                Rules - Same name
                        Same parameter
                        Can be achieve only by Inheritence
*/
#include<iostream>
using namespace std;

//Function Overloading eg-
/*
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
*/

//Operator Overloading eg-
class B{   
public:
    int a;
    int b;
public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output" << value2 - value1 <<"\n";
    }
    void operator- (B &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout << "Output "<< v1*v2 <<"\n";
    }
};


int main(){
    B obj1 , obj2;
    obj1.a = 11;
    obj2.a = 15;

    obj1 + obj2;


    // poly be;
    // be.he();
    // be.he("Person");

    return 0;
}
