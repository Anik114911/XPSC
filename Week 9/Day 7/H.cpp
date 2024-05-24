#include<bits/stdc++.h>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;

void limitless(){
    
}
e4{
    fst string s;
    cin >> s;
    vector<int> a(26,0);
    for(int i=0;i<s.length();i++){
        a[s[i]-'A']++;
    }
    int cnt = 0;
    for(int i=0;i<26;i++){
        if(a[i] % 2 != 0) cnt++;
    }
    if(cnt >= 2){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    int j=0,k=s.length()-1;
    for(int i=0;i<26;){
        if(a[i] > 1){
            char ch = i + 'A';
            s[j] = ch;
            s[k] = ch;
            j++;
            k--;
            a[i] -= 2;
        }
        else if(a[i] == 1){
            int ch = i + 'A';
            s[(s.length()/2)] = ch;
            a[i]--;
        }
        if(a[i] == 0) i++;
    }
    cout << s << endl;
    return 0;
}
