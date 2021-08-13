import readline from 'readline';


const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


function getUserInput(n) {
    rl.question('', (answer) => {
        console.log(`Letter entered: ${answer}`);
        if(n > 1) {
            getUserInput(n - 1);
        } else {
            rl.close();
        }
    });
}

getUserInput(5);