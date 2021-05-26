#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int len=s1.length();
    int lex=0;
    for(int i=0;i<len;i++){
        if(isupper(s1[i]) or isupper(s2[i])){
            s1[i]=tolower(s1[i]);
            s2[i]=tolower(s2[i]);
        }
        if(s1[i]>s2[i]){
            lex=1;
        }
        if(s1[i]<s2[i]){
            lex=-1;
        }
    }
    if(s1>s2){
        cout<<1;
    }else if(s2>s1){
        cout<<-1;
    }else{
        cout<<0;
    }

}