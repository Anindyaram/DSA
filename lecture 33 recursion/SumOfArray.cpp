#include<iostream>
using namespace std;

int arraySum(int *arr , int n){
    //base 
    if(n == 0 ){
        return 0;
    }
    if(n == 1) return arr[0];
    //Recursive relation
    return arr[0] + arraySum(arr+1 , n-1);
}

int main(){
    int arr[] = {43,5,6,7,4};
    int size = 5;

    int sum = arraySum(arr , size);
    cout <<"Sum of Array : "<<sum<<endl;

    return 0;
}

