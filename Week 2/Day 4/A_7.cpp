// @problem link
// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int f[26]={0};
        int l=0,r=0,cnt=0,u=0,mx=0;
        int n = s.length();
        while(r < n){
            if(f[s[r]-'a'] == 0) u++;
            f[s[r]-'a']++;
            cnt++;
            if(u <= k){
                mx = max(cnt,mx);
            }
            else{
                while(l <= r && u > k){
                    f[s[l]-'a']--;
                    if(f[s[l]-'a'] == 0) u--;
                    l++;
                    cnt--;
                }
            }
            r++;
        }
        if(u < k) return -1;
        return mx;
    }
};