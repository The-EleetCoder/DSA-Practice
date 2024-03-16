// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector <int> ans;
//         unordered_map <int,int> mpp;
//         for (int i=0;i<nums.size();i++){
//             mpp[nums[i]]+=1;
//         }
//         int x = nums.size()/3;

//         for (auto it : mpp){
//             if (it.second>x){
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
//     }
// };

// optimised solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int e1 = INT_MIN, e2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (count1 == 0 && nums[i] != e2) {
                e1 = nums[i];
                count1++;
            } else if (count2 == 0 && nums[i] != e1) {
                e2 = nums[i];
                count2++;
            } else if (nums[i] == e1)
                count1++;
            else if (nums[i] == e2)
                count2++;
            else {
                count1--;
                count2--;
            }
        }

        vector <int> ans;
        int c1 = 0, c2 = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==e1) c1++;
            if (nums[i]==e2) c2++;
        }
        if (c1>nums.size()/3) ans.push_back(e1);
        if (c2>nums.size()/3) ans.push_back(e2);

        return ans;
    }
};