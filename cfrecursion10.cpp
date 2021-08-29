#include<iostream>
#include <bits/stdc++.h>

using namespace std;

long long maxx=-6227020800;

int repeat(int globaltracker, long long arr[],long long len) {
    if(globaltracker==len) return 0;

   if(arr[globaltracker]>maxx)
   maxx=arr[globaltracker];

    globaltracker++;
    repeat(globaltracker, arr,len);

    return 1;
}

int main(){
    long long input=0;
    long long tc;
    long long  it=0;
    cin>>tc;
    long long arr[tc];
    long long len=tc;
    while(tc--){
    cin>>input;
    arr[it]=input;
    it++;
    }

    repeat(0,arr,len);
    cout<<maxx;
}