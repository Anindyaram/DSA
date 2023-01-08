/*
Types Of Inheritence:
    1> Simple Inheritence        - One parent one child class 
    2> Multilevel Inheritence    - Parent - child - grandchild - .. so on childs
    3> Multiple Ineheritence     - Many parent of single child class
    4> Hierarchical Inheritence  - Single parent has multiple child
    5> Hybrid Inheritence        - Combination of more then one type of inheritence ,Eg- combination of Hierarchical and multilevel
*/
#include<iostream>
using namespace std;

class Dog{
public:
    int age;
    int color;
public:
    void bark(){
        cout<<"Bhow Bhow!!"<<"\n";
    }
};

class Cat
{
public:
    // int heo;
    void meow(){
        cout<<"Meowww!!"<<"\n";
    }
};

//multiple inheritence
class Barking:public Dog ,public Cat{

};

int main(){
    Barking b;
    b.bark();
    b.meow();
}