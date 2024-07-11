// Leetcode 
// Problem link : https://leetcode.com/problems/combination-sum-ii/description/


class Solution {
public:
    vector<vector<int>> v;
    vector<int> vec;
    void knapsack(int k, vector<int> &a, int i){
        if(k == 0) v.push_back(vec);
        if(i >= a.size() || k <= 0) return;
        for(int j=i;j<a.size();j++){
            if(j != i && a[j] == a[j-1]) continue;
            vec.push_back(a[j]);
            k -= a[j];
            knapsack(k,a,j+1);
            k += a[j];
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        v.clear();
        vec.clear();
        sort(candidates.begin(),candidates.end());
        knapsack(target,candidates,0);
        return v;
    }
};