
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
 var threeSum = function(nums) {
    let result=[]
    for(let index=0;index+2<nums.length;index++)
    {
        for(let count=1;count+1<nums.length;count++){
        if((nums[index]+nums[count]+nums[count+1]===0)&& index!=count && index!=count+1&&count!=count+1)
            {
                
                if(((result.indexOf([nums[index],nums[count],nums[count+1]]))==-1)){
                result.push([nums[index],nums[count],nums[count+1]]);}
               console.log( result[0]==result[1],result[0],result[1]);
            }        
        }
    }
    return result;
};
console.log(threeSum([0,0,0,0]));
