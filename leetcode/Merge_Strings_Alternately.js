/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    let i=0,j=0;
    let a="";
    while(i<word1.length&&j<word2.length)
    {
        a+=word1[i++];
        a+=word2[j++];
    }
    while(i<word1.length)
    {
        a+=word1[i++];
    }
    while(j<word2.length)
    {
        a+=word2[j++];
    }
    return a;
};
