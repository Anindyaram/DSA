/*
Method / Function Overriding - 
    Rules - Same name
            Same parameter
            Can be achieve only by Inheritence
*/
#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<"\n";
    }
};
class Dog:public Animal{
public:
    //Function Overriding 
    void speak(){
        cout<<"Bhow Bhow!!"<<"\n";
    }
};

int main(){
    Animal ob;
    ob.speak(); //Dog 
    cout<<endl;
    Dog obj;
    obj.speak();

    return 0;
}
