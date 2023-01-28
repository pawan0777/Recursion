#include<bits/stdc++.h>
using namespace std;

void solve(string in, string &op){
    if(in.size()==0){
        cout<<"["<<op<<"]"<<endl;
        return;
    }
    string op1=op,op2=op;
    op2.push_back(in[0]);
    op1.push_back(' ');
    op1.push_back(in[0]);
    in.erase(in.begin() + 0);
    solve(in, op1);
    solve(in, op2);
    return;
}

int main(){
    string st = "ABCDE";
    string op;
    op.push_back(st[0]);
    st.erase(st.begin());
    solve(st,op);
    return 0;
}