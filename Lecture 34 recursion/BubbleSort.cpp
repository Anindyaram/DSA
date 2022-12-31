#include <iostream>
using namespace std;
int Print(int *arr,int size){
    for(int i=0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void bubbleSort(int *arr , int size){
    // Print (arr,size);
    //base case
    if(size == 0 || size ==1){
        return ;
    }
    //Processing
    for(int i=0;i<size-1;i++){
        // Print(arr,size);
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    //recursive relation
    bubbleSort(arr,size-1);
}

int main(){
    int arr[] = {3,2,4,6,2,4,9};
    int size = 7;
    bubbleSort(arr , size);
    Print(arr,size);
}

