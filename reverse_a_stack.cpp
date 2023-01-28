#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp){
    if(st.size()==0){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return;
}

void reverse(stack<int> &st){
    if(st.size()==1)
        return;
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st ,temp);
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
    reverse(st);

    while(!st.empty()){
        int t = st.top();
        cout<<t<<" ";
        st.pop();
    }
    return 0;
}