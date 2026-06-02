#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end;
    cout<<"enter the start and end of the range ";
    cin>>start>>end;
    cout<<"prime between"<<start<<"and"<<end <<"are:\n";
    for(int i=start;i<=end;i++){
        if(i<2)
        continue;
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime)
        cout<<i<<" ";
    }
    return 0;
}