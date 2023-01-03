// Inplace Merge Sort
#include <iostream>
using namespace std;

void Print(int *arr,int  size){
    for(int i=0 ; i<size; i++){
        cout<< arr[i] << " ";
    }cout<<endl;
}

void merge(int *arr, int s, int mid, int e)
{
    int s2 = mid + 1;
    if (arr[mid] <= arr[mid + 1])
    {
        return;
    }
    while (s <= mid && s2 <= e)
    {
        if (arr[s] <= arr[s2])
        {
            s++;
        }
        else
        {
            int value = arr[s2];
            int index = s2;
            while (index != s)
            {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[s] = value;
            s++;
            s2++;
            mid++;
        }
    }
}

void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // Left side
    mergesort(arr, s, mid);
    // right side
    mergesort(arr, mid + 1, e);
    //merging the arrays
    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {3, 2, 4, 6, 7, 6, 9};
    int size = 7;
    mergesort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}