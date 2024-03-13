class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums[0];
        int count = 0;
        for (int i=0;i<nums.size();i++){
            if (count==0){
                x = nums[i];
            }
            if (nums[i]==x){
                count++;
            }
            else{
                count--;
            }
        }
        return x;
    }
};