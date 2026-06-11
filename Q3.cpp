#include <bits/stdc++.h>
using namespace std;
int prime(int num){
  int flag=0;
  for(int i=2;i<=num;i++){
    if(num%i==0){
        flag++;
    }
  }
  if(flag==1)
  return true;
  return false;
}
int main(){
    int num;
    cin>>num;
    cout<<prime(num)<<endl;
    return 0;
}