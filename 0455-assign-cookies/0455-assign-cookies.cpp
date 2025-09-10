class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1 = g.size();
        int n2 = s.size();
        int cnt = 0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i = 0;
        int j = 0;

        while(i<n1 && j<n2 ){
            
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
       
    return i;
    }
};