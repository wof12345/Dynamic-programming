#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector <ll> marhaba;

// string executeQ(int y,string name,ll x){
//     if(y==1){
//         auto it = marhaba.find(name);
//         if(it->first==name){
//             x += it->second ; 
//              marhaba.erase(name);
//         }
//         marhaba.insert(make_pair(name,x));
//     }else if(y==2){
//         marhaba.erase(name);
//     }else{
//         // auto found =  marhaba.find(name);
//         // if(found!=marhaba.end()){
//         //     cout<< marhaba[name];
//         // }
//         // else{
//         //     cout<<0;
//         // }
//      cout<<marhaba[name]<<endl;    
//     }
    
    
//     return "got";
// }

int main(){
    
    int query;
    ll x;
    cin>>query;
    // string name;
    // cin>>query;
    while (query--)
    {
        cin>>x;
        marhaba.push_back(x);
        // if(y==1){
        // cin>>x;
        // }else{
        //  x=0;
        // }
        // executeQ(y,name,x);
    }
    sort(marhaba.begin(),marhaba.end());

    for(ll it=0;it<marhaba.size();it++){
        cout<<marhaba[it] <<" ";
    }

    // vector <string> key;
    // vector <ll> value;
    // for(map<string,ll>::iterator it = marhaba.begin(); it != marhaba.end(); ++it) {
    // key.push_back(it->first);
    // value.push_back(it->second);
    // cout << "Key: " << it->first<<" ";
    // cout << "Value: " << it->second << endl;
// }
    

    return 0;
}
