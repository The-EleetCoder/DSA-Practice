// ----> O(n2)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector <int> arr;
//         for (int i=0;i<nums.size();i++){
//             int sum =nums[i];
//             for (int j=i+1;j<nums.size();j++){
//                 if (sum+nums[j]==target){
//                     arr.push_back(i);
//                     arr.push_back(j);
//                     break;
//                 }
//             }
//             if (arr.size()>0) break;
//         }
//         return arr;
//     }
// };

// ------> O(nlogn)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
        vector <int> ans;
        for (int i=0;i<nums.size();i++){
            int element = nums[i];
            int more = target - element;
            if (mpp.find(more) != mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[more]);
                break;
            }
            mpp[element] = i;
        }
        return ans;
    }
};