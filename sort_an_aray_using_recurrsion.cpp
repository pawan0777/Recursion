#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp){
    if(v.size()==0 or v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
    return;
}

void sort(vector<int> &v){
    if(v.size()==1)
        return;
    int val = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,val);
    return;
}

int main(){
    vector<int> v = {4,1,2,7,0,3};
    sort(v);
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}