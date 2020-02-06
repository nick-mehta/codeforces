#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   int n;
   int sum;
   int odd;
   int even;
   
   for(int i=0;i<t;i++){
       cin>>n;
       sum=0;
       odd=0;
       even=0;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]%2!=0 || arr[j]==1){
               odd++;
           }else{
               even++;
           }
           sum+=arr[j];
       }
       
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
       else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
   }
   
   
}