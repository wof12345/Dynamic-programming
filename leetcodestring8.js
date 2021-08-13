var myAtoi = function(s) {

    let int = parseInt(s);
    if(int < -2147483648) int = -2147483648;

    if(int > 2147483647) int = 2147483647

    if(int.toString() === "NaN") int = 0

    console.log(int);
    return int;


}
myAtoi("words and 987")