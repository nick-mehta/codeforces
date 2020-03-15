#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   int n;
   int a;
   for(int i=0;i<t;i++){
       cin>>n;
       vector<pair<int,int>> arr;
       for(int j=0;j<n;j++){
           cin>>a;
           arr.push_back(make_pair(a,j));
       }
       sort(arr.begin(),arr.end());
       bool flag=true;
       for(int j=0;j<n-1;j++){
           if(arr[j].first==arr[j+1].first &&
              (arr[j+1].second-arr[j].second)>1){
                  cout<<"YES"<<endl;
                  flag=false;
                  break;
              }
              if(j<n-2){
              if(arr[j].first==arr[j+1].first &&
                 arr[j+1].first==arr[j+2].first){
                     cout<<"YES"<<endl;
                  flag=false;
                  break;
                 }
              }
       }
       if(flag){
           cout<<"NO"<<endl;
       }
   }
   
}
