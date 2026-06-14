#include<bits/stdc++.h>
using namespace std;
int frequency_element(int n,int target,int arr[]){
    int cnt=0;
   for(int i=0;i<n;i++){
    if(arr[i]==target){
        cnt++;
    }
   }
   return cnt;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int target;
    cin>>target;
    cout<<frequency_element(n,target,arr)<<endl;
    return 0;
}