class Solution {
public:
    int singleNumber(vector<int>& nums) {   	
	int xor1 = 0;
	int size = nums.size();
	for (int i=0;i<size;i++){
		xor1 ^= nums[i];
	}
	return xor1;
    }
};