#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int n){
    int sum=0;
    while(n>0){
        int lstdigit=n%10;
        sum=sum+lstdigit;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    sumofdigit(n);
    cout<<sumofdigit(n)<<endl;
    return 0;
}