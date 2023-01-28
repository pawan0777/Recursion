#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int one, int zero, int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    s.push_back('1');
    solve(s,one+1,zero,n-1);
    s.pop_back();
    if(zero<=n){
        if(zero<one){
            s.push_back('0');
            solve(s,one,zero+1,n-1);
            s.pop_back();
        }
    }
}

int main(){
    int n = 4;
    string st= "";
    int open=0, close=0;
    solve(st,open,close,n);
    return 0;
}