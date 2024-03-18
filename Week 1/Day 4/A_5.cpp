// @Problem Link
// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

int search(string pat, string txt) {
    int f[26]={0};
    for(int i=0;i<pat.length();i++){
        f[pat[i]-'a']++;
    }
    int l=0,r=0,k=pat.length(),cnt=0;
    int f2[26]={0};
    while(r < txt.length()){
        f2[txt[r]-'a']++;
        if(r-l+1 == k){
            bool ok = true;
            for(int i=0;i<26;i++){
                if(f[i] != f2[i]){
                    ok = false;
                    break;
                }
            }
            if(ok) cnt++;
            f2[txt[l]-'a']--;
            l++;
            r++;
        }
        else r++;
    }
    return cnt;
}