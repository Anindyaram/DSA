#include<iostream>
using namespace std;

int countStairs(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return countStairs(n-1) +countStairs(n-2);
}

int main(){
    int n;
    cout<<"Enter no. of stairs: ";
    cin>>n;
    cout << countStairs(n);

    return 0;
}