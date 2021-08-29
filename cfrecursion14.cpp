#include<iostream>
#define ll long long
using namespace std;
bool log2(ll ini,ll num,ll arr[]);
ll len=0;

int main()
{
        ll num, base;

        cin>>num;

        ll arr[num];
        ll it=0;
        ll cp =num;

        while(num--){
            cin>>base;
            arr[it]=base;
            it++;
        }
        
        if(log2(0,(cp-1),arr)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }

        return 0;

}

bool log2(ll ini,ll num,ll arr[])
{
      if(arr[ini]!=arr[num])return false;
    //   cout<<arr[ini]<<"=="<<arr[num]<<endl;
      if(ini>=num)return true;
      ini++;
      num--;
      return log2(ini,num,arr);
}