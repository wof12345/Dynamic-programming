let strs = ["dog", "dodge", "dong", "dud", "dobby", "dongle", "ling"];
let commonprefix = strs[0];

// console.log(strs[1][3]);


for(let i = 1; i < strs.length; i++) {
    for(let j = 0; j < commonprefix.length; j++) {
        if(commonprefix[j] === strs[i][j]) {

            console.log(commonprefix);

        } else {
            commonprefix = commonprefix.slice(0, j);
            break;
        }

        if(commonprefix === "") break;
    }
};


console.log(commonprefix);