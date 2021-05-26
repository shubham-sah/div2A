#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int off;
    int ut;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            off+=x;
        }else{
            if(off<1){
                ut++;
            }else{
                off--;
            }
        }
    }
    cout<<ut;
}

//