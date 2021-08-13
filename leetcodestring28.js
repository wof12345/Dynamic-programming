function findneedle(haystack, needle) {
    let have = haystack.match(needle)

    if(needle === "") return 0;

    if(!have) return -1;

    if(have) return have.index;
}
console.log(findneedle("humna", "um"));