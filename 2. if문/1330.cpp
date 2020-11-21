#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string r;
    if(a==b)
        r="==";
    else if(a>b)
        r=">";
    else
        r="<";
    cout<<r;
    return 0;
}
