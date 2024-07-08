// Leetcode
// Problem link : https://leetcode.com/problems/combination-sum/description/


class Solution {
public:
    vector<vector<int>> v;
    vector<int> vec;
    void unbounded_knapsack(int k,vector<int> &a,int i){
        if(i >= a.size() || k < 0) return;
        if(k == 0){
            v.push_back(vec);
        }
        if(a[i] <= k){
            vec.push_back(a[i]);
            unbounded_knapsack(k-a[i],a,i);
            vec.pop_back();
        }
        unbounded_knapsack(k,a,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        v.clear();
        vec.clear();
        unbounded_knapsack(target,candidates,0);
        vector<vector<int>> ans;
        if(v.size() > 0){
            ans.push_back(v[0]);
        }
        for(int i=1;i<v.size();i++){
            if(v[i] != v[i-1]){
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};