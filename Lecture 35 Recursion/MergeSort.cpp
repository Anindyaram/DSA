#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //coping values
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays question 
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){  //during tranversing indexes should not go out of range
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex] = first[index1++];
    }
    while(index2 < len2){
        arr[mainArrayIndex] = second[index2++];
    }
    //Array has been used so, deleting the copied array
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s>=e)
        return;
    //Finding middle of array
    int mid = s+ (e-s)/2;
    //Before middle of array
    mergeSort(arr , s, mid);
    //After middle of array
    mergeSort(arr, mid+1, e);
    //merging the array after division in single element
    merge(arr ,s ,e);
}

int main(){
    int arr[] = {32,5,6,7,5,9,10};
    int size = 7;

    mergeSort(arr ,0 ,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}