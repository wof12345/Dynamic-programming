#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector <ll> marhaba;

int main(){
    ll query;
    ll val ;

    cin>>query;

    while (query--)
    { 
        cin>>val;
        marhaba.push_back(val);
        // cout<<marhaba.front()<<" "<<query<<endl;
    }

    ll num;
    cin>>num;

    while(num--){
        ll pos;
        cin>>pos;
        ll size = marhaba.size();
        bool found =false;
        vector <ll>::iterator nextMax;

        // for(int it=0;it<size;it++){
        //     if(pos==marhaba[it]){
        //         cout<<"Yes"<<" "<<it+1<<endl;
        //         found=true;
        //         break;
        //     }}
        nextMax =  lower_bound(marhaba.begin(),marhaba.end(),pos);

        if(binary_search(marhaba.begin(), marhaba.end(), pos)){
            cout<<"Yes"<<" ";
        }else{
            cout<<"No"<<" ";
        }
         if((nextMax - marhaba.begin())==marhaba.size()){
            cout<<(nextMax - marhaba.begin())<<endl;    
        }else
            cout<<(nextMax - marhaba.begin())+1<<endl;

      
        

        // if(!found){
        //   nextMax =  lower_bound(marhaba.begin(),marhaba.end(),pos);
        //   if((nextMax - marhaba.begin())==marhaba.size()){
        //   cout<<"No"<<" "<<(nextMax - marhaba.begin())<<endl;    
        //   }else
        //   cout<<"No"<<" "<<(nextMax - marhaba.begin())+1<<endl;
        // }
    }

    return 0;
}