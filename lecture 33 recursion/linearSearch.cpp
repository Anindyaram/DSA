#include <iostream>
using namespace std;

void Print(int *arr, int size){
    cout<<"Size of Array : "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool LinearSearch(int *arr , int size ,int key ){

    Print(arr,size);
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
    int key = 5;
    if(LinearSearch(arr,size,key)==true){
        cout<<"Key Present!!";
    }else{
        cout<<"Key Not Present!!";
    }
    return 0;
}