#include <iostream>
using namespace std;
int main(){
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(char c:s){
        if(c=='A') a++;
        else d++;
    }
    if(a>d) cout<<"Anton";
    else if(a==d) cout<<"Friendship";
    else cout<<"Danik";
    return 0;
}