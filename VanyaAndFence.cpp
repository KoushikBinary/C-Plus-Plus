#include <iostream>
using namespace std;
int main(){
    int a,h,c=0;
    cin>>a>>h;
    int n[a];
    for(int i = 0;i < a;i++){
        cin>>n[i];
        if(n[i]>h) c+=2;
        else c++;
    }
    cout<<c;
    return 0;
}