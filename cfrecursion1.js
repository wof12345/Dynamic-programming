const readline = require('readline')


const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


function getUserInput(n) {
    rl.question('', (answer) => {
        repeat(0, answer);
        if(n > 1) {
            getUserInput(n - 1);
        } else {
            rl.close();
        }
    });
}

getUserInput(1);

function repeat(globaltracker, answer) {
    if(globaltracker >= answer) return;

    globaltracker++;
    console.log("I love recursion");

    repeat(globaltracker, answer);
}