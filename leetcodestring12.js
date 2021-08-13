// let map = {
//     1000: "M",
//     900: "CM",
//     500: "D",
//     400: "CD",
//     100: "C",
//     90: "XC",
//     50: "L",
//     40: "XL",
//     10: "X",
//     9: "IX",
//     5: "V",
//     4: "IV",
//     1: "I",
// }


var intToRoman = function(num) {
    let integers = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    let romans = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]

    let roman = ""
    for(let i = 0; num; i++) {
        while(num >= integers[i]) {
            roman += romans[i];
            num -= integers[i];
            // console.log(ans);
        }
    }
    return roman

};
console.log(intToRoman(2));