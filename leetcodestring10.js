//Incomplete

var isMatch = function(s, p) {
    let integrity = true;
    let patterns = [];

    for(let i = 0; i < p.length; i++) {
        if(p[i + 1] === '*') {
            patterns.push(p[i] + p[i + 1]);
        } else if(p[i] === '.') {
            patterns.push(p[i] + " ");

        } else if(p[i] !== "*") {
            patterns.push(p[i] + " ");
        }

        console.log(patterns);


    }

    // console.log(patterns, p);
    if(patterns.length < 1) return false;
    if(s.length < patterns.length)
        if(patterns.includes(".*")) return true;


    for(let i = 0, l = 0; i < s.length; l++) {

        console.log(i, l);


        if(s[i] !== patterns[l][0]) {
            if(patterns[l][0] !== "." && patterns[l][1] !== "*") {
                return false;
            }

            if(patterns[l][1] === "*") {
                if(patterns[l][0] !== s[i]) {
                    if(patterns.length < 2) return false
                } else {
                    for(let j = i; j < s.length; j++) {


                        if(s[j] !== s[i]) {
                            i = j;
                            // console.log(i);
                            break;
                        }
                        // console.log(s[j], j);
                    }

                }
            }

        } else {
            if(patterns[l][1] === "*") {
                for(let j = i; j < s.length; j++) {
                    // console.log(s[j], j);

                    if(s[j] !== s[i]) {
                        i = j;
                        break;
                    }
                }
            } else
                i++;
        }

        // if(l === patterns.length - 1) {
        //     return "ended";
        // }


    }

    return true;

};
console.log(isMatch("aab", "c*b*a*bn"));