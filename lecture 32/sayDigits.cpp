/*
say digits
input 412    
Expected Output=> four one two 
*/

#include<iostream>
using namespace std;

//Tail Recursion
void sayDigit(int n,string arr[]){
    //base case
    if(n==0) 
        return ;   
    //processing
    int digit =n%10;
    n=n/10;
    //recursive relation
    sayDigit(n,arr);
    cout << arr[digit]<<" ";

}

int main(){

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter number : ";
    cin>>n;
    sayDigit(n,arr);
    cout<<endl;
    return 0;
}

