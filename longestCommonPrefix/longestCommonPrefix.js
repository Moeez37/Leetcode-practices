/**
 * @param {string[]} strs
 * @return {string}
 */
 var longestCommonPrefix = function(strs) {
    let longestString='';
    let prefix='';

    for(let x=0;x<strs.length;x++)
        {   
            if(strs[x].length>=longestString.length)
                {
                    longestString=strs[x];
                    if(strs[x]=='')
                        {
                            return ''
                        }
                }
        }
        for(let index=0;index<longestString.length;index++)
        {  let teller=false;
            for(let counter=0;counter<strs.length;counter++)
            {   let stringOfArray=strs[counter];
                if(index==0 && stringOfArray[index]!=longestString[index])
                {
                    teller=false;
                    break;
                }
                else if(stringOfArray[index]!=longestString[index])
                {
                    teller=false;
                    break;

                }
                else if(stringOfArray[index]==longestString[index])
                {
                    teller=true;
                }
            }
            if(teller)
            {
                prefix+=longestString[index];
            }
            else{
                return prefix;
            }
            
        }
     return prefix;
};