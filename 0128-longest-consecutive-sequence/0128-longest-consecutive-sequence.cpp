class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        int cnt=0;
        int longest =0;
        int lastsmaller = INT_MIN;

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastsmaller){
                cnt++;
                lastsmaller = nums[i];
            }
            else if(nums[i]!= lastsmaller){
                lastsmaller = nums[i];
                cnt = 1;

            }
            longest = max(cnt,longest);
        }
        return longest;
    }
};