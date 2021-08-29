#include<iostream>
#define ll long long
using namespace std;
ll log2(ll num);

int main()
{
        ll num, base;

        cin>>num;

        cout<<log2(num);

        return 0;

}

ll log2(ll num)
{
      if(num==1)
           return 0;

      return 1 + log2(num/2);
}