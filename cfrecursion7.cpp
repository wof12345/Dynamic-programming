#include <iostream>
 
using namespace std;
long init=0;
 
void space(long spacet){
while(spacet--)
cout<<" ";
}
 
void recursion(long times,long backl,long todo){
    space(todo);
    init=backl;
    while(backl--){
        cout<<"*";
    }
    cout<<endl;
times--;
init-=2;
todo++;
    if(times>0){
 recursion(times,init,todo);
    }
}
 
int main()
{
    long times;
    cin>>times;
    long cols= times*2 -1;
    // cout<<times;
    recursion(times, cols,0);
    return 0;
}