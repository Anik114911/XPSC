// Leetcode
// Problem Link : https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> v;
    vector<int> vec;
    void knapsack(vector<int> &a, int i){
        if(i >= a.size()){
            v.push_back(vec);
            return;
        }
        vec.push_back(a[i]);
        knapsack(a,i+1);
        v.push_back(vec);
        if(vec.size() > 0) vec.pop_back();
        knapsack(a,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        v.clear();
        vec.clear();
        knapsack(nums,0);
        map<vector<int>,int> mp;
        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
            mp[v[i]]++;
            if(mp[v[i]] <= 1) ans.push_back(v[i]);
        }
        return ans;
    }
};