#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b=-1,c=0,t;
    cin>>t;
    while(t--){
        cin>>a;
        if(a!=b) c++;
        b=a;
    }
    cout<<c;
}