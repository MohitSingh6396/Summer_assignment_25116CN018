#include<bits/stdc++.h>
using namespace std;
int digitcount(int n){
    int cnt=0;
    while(n!=0){
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    digitcount(n);
    cout<<digitcount(n)<<endl;
    return 0;
}