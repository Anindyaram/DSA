// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<vector<int>>& ans , int index){
    //base case
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index ; i<nums.size() ; i++){
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        //backtracking
        swap(nums[index],nums[i]);
    }
}
//Permutation function
vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    int index = 0;
    solve(nums , ans , index);
    return ans; 
}

int main(){
    vector<int> num = {1,2,3};
    int size = 3;
    vector<vector<int>> a = permute(num);
    cout<<"{ ";
    for (int i = 0; i < a.size(); i++) {
        cout<<"[ ";
        for (int j = 0; j <a[i].size(); j++)
            cout << a[i][j] <<" ";
        cout<< "]";
    }cout<<" }"<<endl;
}