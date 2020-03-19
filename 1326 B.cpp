#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int b[n];
    int a[n];
    int x[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    x[0]=0;
    a[0]=b[0];
    a[1]=b[1]+a[0];
    int temp=0;
    for(int i=2;i<n;i++){
        temp=max(a[i-2],temp);
        a[i]=b[i]+max(a[i-1],temp);
    }
   
  
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
    
}
