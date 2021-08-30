// #include <bits/stdc++.h>
// #include <iostream>
// // #include<boost/multiprecision/cpp_int.hpp>
// #define ll long long

// // using namespace boost::multiprecision;
// using namespace std;

// __int128_t mult1=1;
// __int128_t mult2=1;
// __int128_t divin=0;

// __int128_t recursion(ll times,ll lim){
//     if(lim==0)
//     return 1;

//     mult1*= (__int128_t)times;
//     mult2*= (__int128_t)lim;    
//     divin =  mult1/mult2;
//     // cout<<mult1/mult2<<endl;

//     if(lim>1){
//     lim--;
//     times--;
    
//     }
//     else{
//     return 1;
//     }
    
//     recursion(times,lim);
// }
 
// int main()
// {
//     ll times,times2;
//     cin>>times;
//     cin>>times2;
//     recursion(times,times2);
//     cout<<divin;
//     return 0;
// }

#include <bits/stdc++.h>
#include <iostream>
// #include<boost/multiprecision/cpp_int.hpp>
#define ll long long
#define ld  double

// using namespace boost::multiprecision;
using namespace std;

ll mult1=1;
ll mult2=1;
ld divin=1.00;

ll recursion(ll times,ll lim,ll limult){
    if(lim==0){
    divin=1;
    return 1;
    }

    if(times<lim){
    divin=0;
    return 0;
    }

    // mult1*= times;
    // mult2*= lim;    
   

    if(limult>=1){
    // mult1 *=  times;
    // mult2 *= limult;
    divin*=(ld)times/limult;
    // cout<<times<<" "<<limult<<endl;
    // cout<<divin<<endl;
    limult--;
    times--;
    }
    else{
    return divin;
    }
    
    recursion(times,lim,limult);
}
 
int main()
{
    ll times,times2;
    cin>>times;
    cin>>times2;
    recursion(times,times2,times-times2);
    cout<<(ll)round(divin);
    return 0;
}