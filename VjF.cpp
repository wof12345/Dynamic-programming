#include<iostream>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

ll jackNum,jillNum;
while(1){
vector <ll> jacksStor;

ll toSell=0;

cin>>jackNum>>jillNum;

if(jackNum==0&&jillNum==0)break;


while (jackNum--)
{
    ll temp;
    cin>>temp;
    jacksStor.push_back(temp);
}

while (jillNum--)
{
    ll temp;
    cin>>temp;
    if(binary_search(jacksStor.begin(),jacksStor.end(),temp)){
        toSell++;
    }
}
    cout<<toSell<<endl;
}

return 0;
}