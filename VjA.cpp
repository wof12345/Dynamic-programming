#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

set <ll> marhaba;

string executeQ(int y,ll x){
    string got="No";
    if(y==1){
        marhaba.insert(x);
    }else if(y==2){
        marhaba.erase(x);
    }else{
        auto found =  marhaba.find(x);
        if(found!=marhaba.end()){
            got = "Yes";
        }
        cout<<got<<endl;
    }
    
    return got;
}

int main(){
    
    int y;
    ll query,x;
    cin>>query;
    while (query--)
    {
        cin>>y;
        cin>>x;
    
        executeQ(y,x);
    }

    return 1;
}
