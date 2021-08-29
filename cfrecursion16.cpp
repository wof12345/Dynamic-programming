#include <bits/stdc++.h>
#define ll long long
#include <iostream>

using namespace std;

ll mult1=1;
ll mult2=1;

ll recursion(ll times,ll lim){
    if(lim==0)
    return 1;

    mult1*= times;
    mult2*=lim;    

    // printf("%lld", mult1/mult2);
    printf("%lld\n", mult1/mult2);

    if(lim>1){
    lim--;
    times--;
    }
    else{
    ll div =  (mult1)/( mult2);
    
    return div;
    }
    
    recursion(times,lim);
}
 
int main()
{
    ll times,times2;
    cin>>times;
    cin>>times2;
    cout<<recursion(times,times2);
    // cout<<limi(ll);
    return 0;
}