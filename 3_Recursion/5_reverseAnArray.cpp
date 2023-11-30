void reverse(vector<int> &nums, int start, int end){
    if (start>=end){
        return;
    }
    swap(nums[start],nums[end]);
    reverse(nums,start+1,end-1);
    return;
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int start = 0;
    int end = n-1;
    reverse(nums, start, end);
    return nums;
}