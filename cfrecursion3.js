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
    if(answer <= 0) return;

    globaltracker++;
    answer--;
    console.log(answer + 1);

    repeat(globaltracker, answer);
}