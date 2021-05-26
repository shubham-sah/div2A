#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int res=0;
    int len=s.length();
    char c='a';
    for(int i=0;i<len;i++){
        res+=min(abs(c-s[i]),26-abs(c-s[i]));
        c=s[i];
    }
    cout<<res;

}