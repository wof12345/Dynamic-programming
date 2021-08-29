#include<iostream>
#define ll long long
using namespace std;
ll log2(ll num);
ll len=0;

int main()
{
        ll num, base;

        cin>>num;
        
        cout<<log2(num)+1;

        return 0;

}

ll log2(ll num)
{
      if(num==1)
           return 0;

      if(num%2==0){
            num/=2;
      }else{
            num=3*num +1;
      }

      log2(num);

      return ++len;
}