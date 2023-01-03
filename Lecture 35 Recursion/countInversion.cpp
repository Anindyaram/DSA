// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
/*
Brute Force 
int countInversion(int *arr , int size){
    int count =0 ;
    for(int i=0 ; i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
*/

#include<iostream>
using namespace std;

long long merge(int *arr , int s , int mid , int e){
    long long inv = 0 ;
    int n1 = mid - s + 1;
    int n2 = e - mid;
    int a[n1];
    int b[n2];

    for(int i=0 ; i<n1;i++){
        a[i] = arr[s+i];
    }
    for(int i=0 ; i<n2 ;i++){
        b[i] = arr[mid+i+1];
    }
    int i=0 ,j=0,k=s;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            inv+= n1-i;
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}

//Using Merge Sort 
long long countInversion(int *arr , int s , int e){
    long long inv = 0 ;
    //base case
    if(s < e){
    int mid = s + (e-s)/2;
    inv += countInversion(arr , s ,mid);
    inv += countInversion(arr,mid+1,e);
    inv += merge(arr , s,mid, e);
    }
    return inv;
}

int main(){
    int arr[] = {6,5,4,1,2,3};
    int size = 6;

    cout<<"Number of inversion: "<<countInversion(arr , 0,size-1)<<endl;

    return 0;
}