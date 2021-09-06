#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string S,T;
    cin>>S;
    cin>>T;
    bool hsGot = false;
    // cout<<S<<" "<<T;
    if(lexicographical_compare(&S[0],&S[S.length()-1],&T[0],&T[T.length()-1])){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    // for(int it=0;it<bigger;it++){
    //     if((int)S[it]>(int)T[it]){
    //         hsGot=true;
    //         break;
    //     }
    // }

    // if(hsGot){
    //     cout<<"No";
    // }else{
    //     if(l1>l2){
    //         cout<<"No";
    //     }else{
    //         cout<<"yes";
    //     }
    // // }

    return 0;
}