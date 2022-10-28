/**
 * @param {string} s
 * @return {number}
 */
 const DICT={
    I  :  1,
    V  :  5,
    X  : 10,
    L  : 50,
    C  : 100,
    D  : 500,
    M  : 1000
}
var romanToInt = function(s) {
    let total=0;
    for(var counter=0; counter<s.length;++counter)
        {
            total=total+DICT[s[counter]]
            if(counter!==0 &&(DICT[s[counter-1]] < DICT[s[counter]]))
                {

                    total=total-(2*DICT[s[counter-1]]);
                }
             
        }
   return total;
};
// console.log(romanToInt("MCMXCIV"));