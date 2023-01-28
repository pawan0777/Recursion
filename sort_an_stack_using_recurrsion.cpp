#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp){
    if(st.size()==0 or st.top()>=temp){  //change the sign for temp var to change the order of sorting
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
    return;
}

void sort(stack<int> &st){
    if(st.size()==1)
        return;
    int val = st.top();
    st.pop();
    sort(st);
    insert(st, val);
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
    sort(st);

    while(!st.empty()){
        int t = st.top();
        cout<<t<<" ";
        st.pop();
    }
    
    return 0;
}