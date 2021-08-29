// const readline = require('readline')
// let numarray = [];

// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });


// function getUserInput(n) {
//     rl.question('', (answer) => {
//         repeat(0, answer);
//         getUserInput(answer);
//         let string;
//         for(let index = 0; index < numarray.length; index++) {
//             string += numarray[index] + " ";
//         }

//         console.log(string);
//         if(n > 1) {
//             getUserInput(n - 1);
//         } else {
//             rl.close();
//         }
//     });
// }

// getUserInput(1);

// function repeat(globaltracker, answer) {
//     if(answer <= 0) return;

//     globaltracker++;
//     numarray[globaltracker] = answer % 10;
//     answer /= 10;

//     repeat(globaltracker, answer);
// }

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int repeat(int globaltracker, int answer) {
    if(answer <= 0) return 0;

    globaltracker++;
    answer--;
    cout << globaltracker<<endl;

    repeat(globaltracker, answer);

    return 1;
}

int main(){
    int input=0;
    cin>>input;

repeat(0,input);
}