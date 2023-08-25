#include <bits/stdc++.h>
using namespace std;
int main(){
 int tc=0,a,recruit=0,t;
 cin>>t;
 while(t--){
    cin>>a;
    if(a>=0) recruit+=a;
    else {
       if(recruit==0) tc+=-a;
       else recruit-=-a;
    }
 }
 cout<<tc;

}