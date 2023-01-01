#include<iostream>
using namespace std;

int Print(int *arr , int s , int e){
    cout << "Element in the array: ";
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int *arr ,int s ,int e ,int key){
    cout<<endl;
    Print(arr , s , e);

    //base case
    if(s>e)
        return false;

    int mid = s + (e-s)/2;
    cout<<"Value of array mid :"<<arr[mid]<<endl;
    //element found
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid] < key){
        //Recursive reation
        return binarySearch(arr ,mid+1 ,e ,key);
    }
    else{
        //Recursive reation
        return binarySearch(arr ,s ,mid-1 ,key);
    }
}

int main(){
    int arr[] = {3,4,5,7,9,10,33,35,37,89,90,122,456};
    int size =13;
    int key = 4;
    int ans = binarySearch(arr ,0 ,12 ,key);
    if(ans == true){
        cout << "Present!!"<<endl;
    }else{
        cout << "Not Present!!"<<endl;
    }

    return 0;
}

