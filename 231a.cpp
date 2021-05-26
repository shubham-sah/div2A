#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int q=0;;
    int p,v,t;
    int vo;

    while(n--){
        vo=0;
        p=0;
        v=0;
        t=0;
        cin>>p>>v>>t;
        if(p==1) vo++;
        if(v==1) vo++;
        if(t==1) vo++;
        if(vo>=2){
            q++;
        }
    }
    cout<<q;
}