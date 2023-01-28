#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int k, int index){
    if(v.size()==1){
        cout<<v[0];
        return;
    }
    index = (index+k)%v.size();
    v.erase(v.begin() + index);
    solve(v,k,index);
    return;
}

int main(){
    int n = 40;
    int k = 7;
    vector<int> persons(n);
    k--;
    for (int i = 0; i < n; i++)
        persons[i] = i+1;
    int index =0;
    solve(persons,k,index);
    return 0;
}