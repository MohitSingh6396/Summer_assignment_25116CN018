#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int target,int arr[]){
   for(int i=0;i<n;i++){
    if(arr[i]==target){
        return i;
    }
   }
   return -1;

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
    cout<<linear_search(n,target,arr)<<endl;
    return 0;
}