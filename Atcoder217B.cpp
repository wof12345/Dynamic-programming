#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string S,T,L;
    char pu[3];
    cin>>S;
    cin>>T;
    cin>>L;

    char pre[] = {'G','B','R','H'};

    pu[0]=S[1];
    pu[1]=T[1];
    pu[2]=L[1];

    for(int it=0;it<4;it++){
        bool found =false;
        for(int i=0;i<3;i++){
            if(pre[it]==pu[i]){
                found=true;
                break;
            }
        }

        if(!found){
            cout<<"A"<<pre[it]<<"C";
            break;
        }
    }
    // int l1 = S.length();
    // int l2 = T.length();
    // int bigger = l1<l2?l1:l2;
    // bool hsGot = false;

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
    // }

    return 0;
}