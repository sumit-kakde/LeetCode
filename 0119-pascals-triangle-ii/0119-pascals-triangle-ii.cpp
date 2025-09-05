    class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            long long ans =1;
            //int n = rowIndex-1;
            vector<int> res;
            res.push_back(1);
            for(int i=1;i<=rowIndex;i++){
                ans = ans*(rowIndex-i+1);
                ans = ans/i;
                res.push_back(ans);
            } 
            return res;
        }
    };