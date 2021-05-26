#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a=0,d=0;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton\n";
    }else if(d>a){
        cout<<"Danik\n";
    }else{
        cout<<"Friendship\n";
    }
}