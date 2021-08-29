#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
 
using namespace std;
 int globaleven=0;

bool isvowel(char c){
    c=tolower(c);
    if(c=='a'||c=='i'||c=='o'||c=='e'||c=='u')
    return true;

 return false;
}
 
void recursion(string sent,int it){
if(it==sent.length())return;

if(isvowel(sent[it]))
globaleven++;

it++;
recursion(sent,it);
}
 
int main()
{
    string sent;
    getline(cin,sent);
    recursion(sent,0);
    cout<<globaleven;
    return 0;
}