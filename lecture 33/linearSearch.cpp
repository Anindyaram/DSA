#include <iostream>
using namespace std;

bool LinearSearch(int *arr , int size ,int key ){
    //base case
    if(size == 0) 
        return false;
    if(arr[0] == key){
        return true;
    }else{
        return LinearSearch(arr+1 , size-1 ,key);
    }  
}

int main(){
    int arr[] = {2,4,5,6,7,9};
    int size = 6;
    int key = 1;
    if(LinearSearch(arr,size,key)==true){
        cout<<"Key Present!!";
    }else{
        cout<<"Key Not Present!!";
    }
    return 0;
}