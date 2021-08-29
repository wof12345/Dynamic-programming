#include<iostream>
#include <bits/stdc++.h>

using namespace std;

long long mult=1;

int repeat(int globaltracker, long long answer) {
    if(answer <= 0) return 0;

    globaltracker++;
    mult*=answer;
    answer--;

    repeat(globaltracker, answer);

    return 1;
}

int main(){
    long long input=0;
    cin>>input;

    repeat(0,input);
    cout<<mult;
}