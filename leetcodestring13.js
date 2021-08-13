let romanNumbers = new Map();

let s = "MMCCCXLIX";

romanNumbers.set('I', 1);
romanNumbers.set('V', 5);
romanNumbers.set('X', 10);
romanNumbers.set('L', 50);
romanNumbers.set('C', 100);
romanNumbers.set('D', 500);
romanNumbers.set('M', 1000);

let integer = 0;


for(let i = 0; i < s.length; i++) {
    let temp;
    if(s[i] === 'I' && s[i + 1] === 'V') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else if(s[i] === 'I' && s[i + 1] === 'X') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else if(s[i] === 'C' && s[i + 1] === 'M') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else if(s[i] === 'C' && s[i + 1] === 'D') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else if(s[i] === 'X' && s[i + 1] === 'C') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else if(s[i] === 'X' && s[i + 1] === 'L') {
        temp = romanNumbers.get(s[i + 1]) - romanNumbers.get(s[i]);
        i++;
    } else {
        temp = romanNumbers.get(s[i]);
    }
    console.log(temp);

    integer += temp;
}

console.log(integer);