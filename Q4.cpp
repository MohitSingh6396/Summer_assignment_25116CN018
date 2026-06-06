#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
   int pow=1;
    for(int i=1;i<=n;i++){
        pow=pow*x;
    }
    cout<<pow<<endl;
    return 0;
}