#include<iostream>
#include <bits/stdc++.h>

using namespace std;
stack <int> binary;

 int repeat(int globaltracker, int answer, int arr[]) {
    if(answer <= 0) return 0;

    if(globaltracker%2==0)
    binary.push(arr[globaltracker]);

    globaltracker++;
    answer--;
    
    repeat(globaltracker, answer,arr);

    return 0;
}

int main(){
    int tc=0;
    
    int number;
    int iter=0;
    cin>>tc;
    int arr[tc];
    while (tc--)
    {
        cin>>number;
        
        arr[iter]=number;
        iter++;
    }


    repeat(0,iter,arr);

     while (binary.size()>0)
    {
        cout<<binary.top()<<" ";
        binary.pop();
    }         
}