class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int cnt = 0;
        int el = INT_MIN ;
        int cnt2 = 0;
        int el2 = INT_MIN;

        for(int i=0;i<n;i++){
            if(cnt == 0 && nums[i]!=el2){
                cnt = 1;
                el = nums[i];
            }
            else if(cnt2==0 && nums[i]!=el ){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else if(nums[i]==el2){
                cnt2++; 
            }   
            else{
                cnt--;
                cnt2--;
            }
        }
        vector <int> res;
        int ct1 = 0;
        int ct2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el)ct1++;
            if(nums[i]==el2) ct2++;
        }
        if(ct1 > n/3)res.push_back(el);
        if(ct2 > n/3) res.push_back(el2);
        
        return res;

    
    }
};