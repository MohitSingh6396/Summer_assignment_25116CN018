#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int sum=0;
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout<<"perfect num"<<emdl;
    }
    else
    {
        cout<<"not perfect num"<<endl;
    }
    return 0;
}