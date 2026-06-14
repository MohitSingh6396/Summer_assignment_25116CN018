#include<bits/stdc++.h>
using namespace std;
int sec_largest(int n,int arr[]){
    int largest=arr[0];
    int sec_largest=arr[0];
for(int i=0;i<n;i++){
    largest=max(largest,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<largest){
    sec_largest=max(sec_largest,arr[i]);
    }
}
    return sec_largest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sec_largest(n,arr)<<endl;
    return 0;
}