#include<iostream>
using namespace std;

bool isSorted(int *arr , int size){
    //base case
    if(size==0 || size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        //recursive relation
        return isSorted(arr+1 , size-1);
    }
}

int main(){
    int arr[] = {3,4,5,9,7,8};
    int size = 6;
    bool ans = isSorted(arr,size);
    cout << ans <<endl;

    return 0;
}
