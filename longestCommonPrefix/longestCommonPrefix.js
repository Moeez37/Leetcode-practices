/**
 * @param {string[]} strs
 * @return {string}
 */
 var longestCommonPrefix = function(strs) {
    let longestString=strs[0];
    let prefix='';
        for(let index=0;index<longestString.length;index++)
        {   let teller=false;
            for(let count=0;count<strs.length;count++)
            {
                if(strs[count][index]!=longestString[index])
                {
                    teller=false;
                    break;
                }
                else
                {
                   teller=true;
                }
            }
            if(teller)
            {
                prefix+=longestString[index];
            }
            else
            {
                break;
            }
        }
        return prefix
};