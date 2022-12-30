#include<iostream>
using namespace std;

void reverse(string& s,int i , int j){
    //base case
    if(i>j){
        return ;
    }
    swap(s[i] , s[j]);
    i++;
    j--;

    //Recursively call;
    reverse(s,i,j);

}

int main(){
    string s ;
    cout<<"Enter String : ";
    cin>>s;
    cout<<"Reversed String: ";
    reverse(s,0,s.length()-1);
    cout<<s<<endl;

    return 0;
}
