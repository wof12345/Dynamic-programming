let readline = require('readline');


const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function getLargestSubstringLength(string) {
    let input = [];
    let substring = '';
    let foundDuplicate = 0;

    for(let i = 0; i < string.length; i++) {
        let washere = false;
        for(let j = 0; j < substring.length; j++) {
            if(substring[j] == string[i]) {
                washere = true;
                input.push(substring.length);
                foundDuplicate = substring[j];
                substring = '';
                break;
            }
        }

        if(!washere) {
            substring += string[i];
        } else {
            for(let l = i - 1; l >= 0; l--) {
                i--
                // console.log(string[i], i, foundDuplicate);
                if(foundDuplicate === string[l])
                    break;
            }
            // if(string[i] !== string[i + 1]) {
            //     i--;
            // }
        }

        // console.log(substring, string[i], i);

        if(subcount > 10)
            break;
    }
    input.push(substring.length)

    return input.sort((a, b) => b - a)[0];

}



function getUserInput(n) {
    rl.question('', (string) => {
        let largestsubstrLnthg = getLargestSubstringLength(string);


        console.log(largestsubstrLnthg);

        if(n > 1) {
            getUserInput(n - 1);
        } else {
            rl.close();
        }
    });
}

getUserInput(1);