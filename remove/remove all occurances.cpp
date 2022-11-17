class Solution {
public:
      int removeElement(vector<int>& nums, int val) {
        int size=0;
        for(int count=0;count<nums.size();count++)
        {
            if(nums[count]==val)
            {
                nums.erase(nums.begin()+count);
                size++;
                count--;
            }
        }
        return nums.size();
    }
};