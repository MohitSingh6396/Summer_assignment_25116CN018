#include<bits/stdc++.h>
using namespace std;
int reverseofnum(int n){
    int rev=0;
    while(n>0){
        int lstdigit=n%10;
        rev=rev*10+lstdigit;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    reverseofnum(n);
    cout<<reverseofnum(n)<<endl;
    return 0;
}