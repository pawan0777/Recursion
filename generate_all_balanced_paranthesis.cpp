#include<bits/stdc++.h>
using namespace std;

void solve(string &s, int open, int close){
    if(open==0 and close==0){
        cout<<s<<endl;
        return;
    }
    if(open>0){
        s.push_back('(');
        solve(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            solve(s,open,close-1);
            s.pop_back();
        }
    }
}

int main(){
    int n = 4;
    string st= "";
    int open=n, close=n;
    solve(st,open,close);
    return 0;
}