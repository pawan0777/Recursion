#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k){
    if(k==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, k-1);
    st.push(temp);
    return;
}

void del_mid(stack<int> &st, int size){
    if(size==0)
        return ;
    int k = size/2 + 1; 
    solve(st ,k);
    return;
}

int main(){
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(7);
    st.push(2);
    st.push(6);
    del_mid(st, 6);

    while(!st.empty()){
        int t = st.top();
        cout<<t<<" ";
        st.pop();
    }
    return 0;
}