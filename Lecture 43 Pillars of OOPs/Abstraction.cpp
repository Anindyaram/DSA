/*
Abstraction - Implementation Hiding 
    Can be achieved by using access modifiers;
*/
#include<iostream>
using namespace std;

class nameCall{
private:
    string adminName = "Mahadev";
    string name = "";
public:
    int setName(string n){
        this->name = n;
    }
    void getYourName(){
        cout<<name<<endl;
    }
    void ADMIN(){
        cout<<adminName<<endl;
    }
};

int main()
{
    nameCall obj;
    obj.setName("Har Har");
    obj.getYourName();
    obj.ADMIN();

    return 0;
}

