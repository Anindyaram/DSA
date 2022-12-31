#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i ,int j ){
    if(i>j) 
        return true;

    if(str[i] != str[j]){
        return false;
    }else{
        return checkPalindrome(str,i+1,j-1);
    }
}

int main(){
    string s = "abccba";
    cout<<endl;
    bool isPalindrome = checkPalindrome(s , 0 , s.length()-1);
    if(isPalindrome){
        cout<<"Palindrome number!";
    }else{
        cout<<"Not a palindrome number!";
    }
    return 0;
}