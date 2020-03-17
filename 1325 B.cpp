#include <iostream>
#include<unordered_map>

using namespace std;

void my_fun(int arr[],int n)
{
unordered_map<int ,int>table;
for(int i=0;i<n;i++)
table[arr[i]]++;

cout<<table.size()<<endl;
}

int main() {
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        my_fun(arr,n);
    }
}
