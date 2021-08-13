import readline from 'readline';
// import { lego } from '../Dynamic programming/prebuiltcodes'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function numberInputSpaceseparated() {
    let numbers;
    rl.question('', (answer) => {
        numbers = answer.split(' ');
        numbers = numbers.map((elm) => +elm);
        rl.close();
    });
    const arr = numbers;
}