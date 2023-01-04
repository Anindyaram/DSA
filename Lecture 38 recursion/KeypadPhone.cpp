// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

#include<iostream>
#include<vector>
using namespace std;

void solve(string digit , string output , vector<string>& ans , int index , string *mapping){
    //base case
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }
    int num = digit[index] - '0';
    string value = mapping[num];
    for(int i=0 ; i<value.length() ; i++){
        output.push_back(value[i]);
        solve(digit,output,ans,index+1,mapping);
        output.pop_back();
    }
}
vector<string> letterCombination(string digits){
    vector<string> ans;
    if(digits.length() == 0){
        return ans;
    }
    string output = "";
    int index = 0 ;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits , output , ans , index , mapping);
    return ans;
}   

int main(){
    string digits ="23";
    vector<string> a = letterCombination(digits);
    cout<<"{ ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ",";
    }cout<<" }";
}


