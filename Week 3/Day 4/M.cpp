#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        string st1,st2;
        cin >> st1 >> st2;
        int x=0,s1=0,s2=0,m1=0,m2=0,l1=0,l2=0;
        for(int i=0;i<st1.length();i++){
            if(st1[i] == 'X') x++;
            else if(st1[i] == 'S') s1 = 0 - x; 
            else if(st1[i] == 'M') m1 = 1; 
            else if(st1[i] == 'L') l1 = 2 + x;
        }
        x = 0;
        for(int i=0;i<st2.length();i++){
            if(st2[i] == 'X') x++;
            else if(st2[i] == 'S') s2 = 0 - x; 
            else if(st2[i] == 'M') m2 = 1; 
            else if(st2[i] == 'L') l2 = 2 + x; 
        }
        if(st1[st1.length()-1] == 'S'){
            if(st2[st2.length()-1] == 'S'){
                if(s1 > s2) cout << ">" << endl;
                else if(s1 < s2) cout << "<" << endl;
                else cout << "=" << endl;
            }
            else if(st2[st2.length()-1] == 'M') cout << "<" << endl; 
            else cout << "<" << endl;
        }
        else if(st1[st1.length()-1] == 'M'){
            if(st2[st2.length()-1] == 'S') cout << ">" << endl;
            else if(st2[st2.length()-1] == 'M') cout << "=" << endl;
            else cout << "<" << endl;
        }
        else if(st1[st1.length()-1] == 'L'){
            if(st2[st2.length()-1] == 'S') cout << ">" << endl;
            else if(st2[st2.length()-1] == 'M') cout << ">" << endl; 
            else if(st2[st2.length()-1] == 'L'){
                if(l1 > l2) cout << ">" << endl;
                else if(l1 < l2) cout << "<" << endl;
                else cout << "=" << endl;
            }
        }
    }
    return 0;
}
