#include <iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0) return 1;
    //processing
    cout<<"Current Stack: "<<n<<"\n";
    //recursive relation
    return 2 * power(n-1);
}

int main(){
    int n;
    cout<<"Enter power: ";
    cin>>n;
    cout << power(n)<<endl;
    return 0;
}
