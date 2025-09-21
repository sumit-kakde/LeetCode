class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int lastsmall = INT_MIN;
        int cnt = 0;
        int maxseq = 0;

        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(nums[i]-1 == lastsmall){
                cnt++;
                lastsmall = nums[i];
            }
            if(nums[i]!=lastsmall){
                lastsmall =nums[i];
                cnt=1;
            }
            maxseq = max(cnt,maxseq);
        }

    return maxseq;
    }
};