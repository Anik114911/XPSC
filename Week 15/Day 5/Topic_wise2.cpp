// Leetcode
// Problem link : https://leetcode.com/problems/palindrome-partitioning/


class Solution {
public:
    vector<vector<string>> st;
    vector<string> v;
    bool isPalindrome(string &s){
        int l = 0, r = s.length()-1;
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void palindrome(string &s, int i){
        if(i >= s.size()) return;
        string str;
        for(int j=i;j<s.length();j++){
            str.push_back(s[j]);
            if(isPalindrome(str)){
                v.push_back(str);
                palindrome(s,j+1);
                if(j == s.size()-1) st.push_back(v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        v.clear();
        st.clear();
        palindrome(s,0);
        return st;
    }
};