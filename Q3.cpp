#include<bits/stdc++.h>
using namespace std;
void largest(int n,int arr[]){
    int largest=arr[0];
    int smallest=arr[0];
for(int i=0;i<n;i++){
    largest=max(largest,arr[i]);
    smallest=min(smallest,arr[i]);
    }
    cout<<largest<<endl;
    cout<<smallest<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(n,arr);
    return 0;
}