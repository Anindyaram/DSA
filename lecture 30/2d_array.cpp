#include<iostream>
using namespace std;

int main(){
    int r , c;
    cin>>r>>c;
    int ** arr = new int*[r];

    for(int i=0 ; i<r ; i++){
        arr[i] = new int[c];
    }

    //creation done

    for(int i=0 ; i<r ;i++){
        for(int j=0 ; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0 ; i<r ;i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //release memory
    for(int i=0 ; i<r ;i++){
        delete [] arr[i];
    }
    delete []arr;

}