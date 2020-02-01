#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b,c,n;
    
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>n;
    
    
    
    if(a==b && b==c){
        if(n%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if (a==b && a>c){
        if(n>=a-c){
            n=n-(a-c);
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
     else if (a==b && a<c){
        if(n>=(2*(c-a))){
            n=n-(2*(c-a));
            if(n%3==0 ){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
     else if (c==b && b>a){
        if(n>=b-a){
            n=n-(b-a);
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
     else if (c==b && b<a){
        if(n>=(2*(a-b))){
            n=n-(2*(a-c));
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
     else if (a==c && a>b){
        if(n>=a-b){
            n=n-(a-b);
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
     else if (a==c && a<b){
        if(n>=(2*(b-a))){
            n=n-(2*(b-a));
            if(n%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
             cout<<"NO"<<endl;
        }
    }
    
    else{// a,b,c are different
        if(a>b && a>c){
            if(n>=(a-b)+(a-c)){
                n=n-(a-b)-(a-c);
                if(n%3==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                    cout<<"NO"<<endl;
                }
            
        }
        else if(b>a && b>c){
            if(n>=(b-a)+(b-c)){
                n=n-(b-a)-(b-c);
                if(n%3==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                    cout<<"NO"<<endl;
                }
            
        }
        else if(c>a && c>b){
            if(n>=(c-b)+(c-a)){
                n=n-(c-b)-(c-a);
                if(n%3==0){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                    cout<<"NO"<<endl;
                }
            
        }
        
    }
    }
}