#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6][6];
    int row,col;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                row=i;
                col=j;
            }
        }
    }
    int ans=abs(row-3)+abs(col-3);
    cout<<ans;
}