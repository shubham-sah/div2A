#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n];
    int s=0,d=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int r=n-1;
    int l=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[r]>a[l]){
                s+=a[r];
                r--;
            }else if(a[r]<a[l]){
                s+=a[l];
                l++;
            }else {
                s+=a[l];
            }
        }
        else{
            if(a[r]>a[l]){
                d+=a[r];
                r--;
            }else if(a[r]<a[l]){
                d+=a[l];
                l++;
            }else{
                d+=a[l];
            }
        }
    }
    cout<<s<<" "<<d;
}