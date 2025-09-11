class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int i=1;i<=numRows;i++){

        vector<int> genrow ;
        long long ans = 1;
        genrow.push_back(1);
        for(int col=1;col<i;col++){
            ans = ans*(i-col);
            ans = ans/col;
            genrow.push_back(ans);
        }
        result.push_back(genrow);
        }
    return result;
    }
};