#include<bits/stdc++.h>
using namespace std;
void count(int n,int arr[]){
    int cnteven=0;
    int cntodd=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        cnteven++;
    }
    else{
        cntodd++;
    }
    }
    cout<<cnteven<<endl;
    cout<<cntodd<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   count(n,arr);
    return 0;
}