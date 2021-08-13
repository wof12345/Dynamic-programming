var lengthOfLastWord = function(s) {
    s = s.trim();
    let words = s.split(/[ ]+/)
    console.log(words);

    return words[words.length - 1].length;


};

console.log(lengthOfLastWord("The moon "));