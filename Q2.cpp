#include<bits/stdc++.h>
using namespace std;
void sum(int n,int arr[]){
   int sum=0;
   for(int i=0;i<n;i++){
    sum=sum+arr[i];
   }
   cout<<sum<<endl;
  int  average=sum/n;
  cout<<average<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(n,arr);
    return 0;
}