// Leetcode 
// Difficulty : Hard
// Problem link : https://leetcode.com/problems/n-queens/


class Solution {
public:
    vector<vector<string>> ans;
    vector<string> v;
    vector<int> place;
    bool ok (int f, int s, int n){
        bool flag = true;
        for(int i=0;i<place.size();i++){
            int ti=i,tj=place[i];
            while(ti >= 0 && ti < n && tj >= 0 && tj < n){
                if(ti == f && tj == s) return false;
                ti++;
                tj--;
            }
            ti=i,tj=place[i];
            while(ti >= 0 && ti < n && tj >= 0 && tj < n){
                if(ti == f && tj == s) return false;
                ti++;
                tj++;
            }
        }
        return true;
    }
    bool flag(int j, vector<int> &place){
        for(int k=0;k<place.size();k++){
            if(place[k] == j){
                return false;
            }
        }
        return true;
    }
    void check(int n, int m, int i){
        if(m <= 0 || i >= n){
            if(m <= 0) ans.push_back(v);
            return;
        }
        string s;
        vector<int> mark;
        for(int j=0;j<n;j++){
            if(!flag(j,place)){
                continue;
            }
            else if(ok(i,j,n)){
                if(i == 2 && j == 2){
                    for(auto x : place) cout << x << " ";
                    cout << endl;
                }
                place.push_back(j);
                for(int k=0;k<n;k++){
                    if(k != j) s.push_back('.');
                    else s.push_back('Q');
                }
                v.push_back(s);
                check(n,m-1,i+1);
                place.pop_back();
                s.clear();
                v.pop_back();
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        v.clear();
        check(n,n,0);
        return ans;
    }
};
