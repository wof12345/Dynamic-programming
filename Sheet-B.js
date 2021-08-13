let readline = require('readline');


const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input;

function getUserInput(n) {
    rl.question('', (answer) => {
        answer = answer.split('\\');
        console.log(`${answer[0]}`);
        if(n > 1) {
            getUserInput(n - 1);
        } else {
            rl.close();
        }
    });
}

getUserInput(1);