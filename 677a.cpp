#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int a[n];
    int b=0,no=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            b++;
        }else{
            no++;
        }
    }
    int ans=no+(2*b);
    cout<<ans;

}