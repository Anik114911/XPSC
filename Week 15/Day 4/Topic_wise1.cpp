// Leet code
// Problem Link : https://leetcode.com/problems/permutations/description/


class Solution {
public:
    vector<vector<int>> ans;
    vector<int> vec;
    void permutation(vector<int> &v, vector<int> &a, int i){
        for(int j=i;j<a.size();j++){
            if(v[j] == 0){
                v[j]++;
                vec.push_back(a[j]);
                permutation(v,a,0);
                v[j]--;
                vec.pop_back();
            }
        }
        if(vec.size() == a.size()) ans.push_back(vec);
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        permutation(v,nums,0);
        return ans;
    }
};