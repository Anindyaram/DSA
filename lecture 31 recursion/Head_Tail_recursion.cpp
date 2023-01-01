#include <iostream>
using namespace std;

//Head Recursion - When we first write recursive relation and then we write processing
void print_front(int n){
    //base case
    if(n==0) return ;
    //Recursive Relation
    print_front(n-1);
    // Processing
    cout<<n<<endl;
}

//Tail Recursion - When we first write Processing and then we write recursive relation
void print_back(int n){
    //base case
    if(n==0) return ;
    // Processing
    cout<<n<<endl;
    //Recursive Relation
    print_back(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    cout<<"Head Recursion: "<<endl;
    print_front(n);
    cout<<"Tail Recursion: "<<endl;
    print_back(n);
    return 0;
}
