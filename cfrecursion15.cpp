#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum=0;
void recursion(ll times,ll lim){
    ll tempintp;
    cin>>tempintp;
    sum+= tempintp;
    times--;
    if(times>0){
    recursion(times,lim);
    }else
    printf("%f",(double)sum/lim);
}
 
int main()
{
    ll times;
    cin>>times;
    recursion(times,times);
    return 0;
}