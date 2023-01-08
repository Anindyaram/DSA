/*
Encapsulation - Wraping data member and function in same class
*/
#include <iostream>
using namespace std;

class univ
{
private:
    string name ="Anindya";
    int ErnNo;

public:
    string getName(){
        return this->name;
    }
};

int main()
{
    univ n;
    cout<<n.getName();
}