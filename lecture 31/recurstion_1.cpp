/*When a function call itself it's known as Recursion
    When a problem can be divided into smaller sub problem then we can use Recursion to solve it.
    Two Things are mandatory to solve a problem by recursion i.e Base Case and Recursive Relation and we can add one more thing i.e Processing(cout ,cin ,update)

    Types of Recursion - 
    Tail Recursion - When recursive relation comes after processing.
    Head Recursion - When recursive relation comes before processing
*/

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) //Base case - When we need to stop the program. 
    //If we don't make a base case then memory overflow occur known as segmentation fault.
     return 1;
    return n * factorial(n-1); //Recursive Relation between sub problems

}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;

}