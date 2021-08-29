#include<iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <int> arrsum;

int repeat(int globaltracker, ll arr[],ll arr2[],ll len) {
    if(globaltracker==len) return 0;
    arrsum.push_back(arr[globaltracker]+arr2[globaltracker]);
    globaltracker++;
    // cout<<arr[globaltracker]+arr2[globaltracker]<<endl;
    repeat(globaltracker, arr,arr2 ,len);
    return 1;
}

int main(){
    ll input=0;
    ll tc;
    ll tc2;
    ll  it=0;
    cin>>tc;
    cin>>tc2;
    ll tccap =tc2;
    ll tottc = tc*tc2;
    ll arr[tottc];
    ll arr2[tottc];
    ll len=tottc;
    while(tottc--){
    cin>>input;
    arr[it]=input;
    it++;
    }
    it=0;
    tottc=len;
    while (tottc--)
    {
    cin>>input;
    arr2[it]=input;
    it++;
    }
    
    tottc=len;
    it=0;
    ll secondcount=1;
    repeat(0,arr,arr2,len);
    while (tottc--)
    {
    cout<< arrsum[it];

    if(secondcount==tccap){
        cout<<"\n";
        secondcount=0;
    }
    else cout<<" ";

    secondcount++;
    it++;
    }
    
}