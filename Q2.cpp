#include <bits/stdc++.h>
using namespace std;
int max_element(int num1, int num2){
  int  maxi=max(num1,num2);
    return maxi;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
   
    cout<<max_element(num1,num2)<<endl;
    return 0;
}