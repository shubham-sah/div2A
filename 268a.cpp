#include<bits/stdc++.h>
using namespace std;

int main(){
    int team;
    cin>>team;
    int home[team];
    int guest[team];
    for(int i=0;i<team;i++){
        cin>>home[i];
        cin>>guest[i];
    }
    int count=0;
    for(int i=0;i<team;i++){
        for(int j=0;j<team;j++){
            if(home[i]==guest[j]){
                count++;
            }
        }
    }
    cout<<count;

}