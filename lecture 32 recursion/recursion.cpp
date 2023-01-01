#include<iostream>
using namespace std;

//Tail Recursion
void reacahHome(int src , int dest){
    cout<< "source" << src<<" " <<"destination "<<dest<<endl;
    //base
    if( src == dest ){
        cout<<"At home "<<endl;
        return;
    }
    //processing
    src++;
    //recursion call
    reacahHome(src , dest);
}

int main(){

    int src=1;
    int desc=10;
    reacahHome(src,desc);
    return 0;
}