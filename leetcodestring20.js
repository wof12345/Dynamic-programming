let s = '({})';

function patternmatch() {
    let stackbr = [];
    let brpattern = {
        '(': ')',
        '{': '}',
        '[': ']'
    }

    for(let i = 0; i < s.length; i++) {
        if(s[i] === '(' || s[i] === '{' || s[i] === '[') {
            stackbr.push(s[i]);
        } else {
            // console.log(stackbr);

            let poppedbr = stackbr.pop();
            // console.log(poppedbr);

            if(s[i] !== brpattern[poppedbr]) return false
        }
    }
    console.log(brpattern['(']);
    if(stackbr.length !== 0) return false;

    return true;
}

console.log(patternmatch(s));