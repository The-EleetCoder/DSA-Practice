class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        for (int i=0; i<nums.size(); i++){
            xor1 ^= i;
            xor2 ^= nums[i];
        }
        int xor3 = xor1 ^ xor2 ^ nums.size();
        if (xor3) return xor3;
        else return 0;
    }
};