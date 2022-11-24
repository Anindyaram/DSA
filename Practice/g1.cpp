/*
This problem was recently asked by Google.
Given a list of numbers and a number k, 
return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, 
return true since 10 + 7 is 17.
*/

#include<iostream>
using namespace std;

int check(int arr[] , int k , int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == k){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter k "<<endl;
    cin>>k;
    if(check(arr,k,n)){
        cout<<"true";
    }else{
        cout<<"false";
    };
    return 0;
}