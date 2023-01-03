#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<int>output , int index , vector<vector<int>>& ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums , output , index+1 , ans);
        //include
        int element = nums[index]; //including element in the output vector
        output.push_back(element);
        solve(nums , output , index+1 , ans);
    }

vector<vector<int>> Subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        int index = 0;
        solve(nums , output , index , ans);
        return ans;
}

int main(){
    vector<int> arr = {1,2,3};
    int size = 3;

    vector<vector<int>> a = Subsets(arr);
    cout<<"{ ";
    for (int i = 0; i < a.size(); i++) {
        cout<<"{ ";
        for (int j = 0; j <a[i].size(); j++)
            cout << a[i][j] <<" ";
        cout<< "},";
    }cout<<" }"<<endl;
    return 0;
}