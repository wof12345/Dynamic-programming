#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector <ll> marhaba;

int main(){
    ll query;
    ll pos0,pos1,pos2;
    ll val ;

    cin>>query;

    while (query--)
    { 
        cin>>val;
        marhaba.push_back(val);
        // cout<<marhaba.front()<<" "<<query<<endl;
    }

    cin>>pos0;
    marhaba.erase(marhaba.begin()+pos0-1);

    cin>>pos1;
    cin>>pos2;
    marhaba.erase(marhaba.begin()+pos1-1,marhaba.begin()+pos2-1);

    cout<<marhaba.size()<<endl;
    for(int it=0;it<marhaba.size();it++){
        cout<<marhaba[it]<<" ";
    }


    return 0;
}