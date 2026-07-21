class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n==0) return "";
        string ans = "";
        int sz = 202;
        for(int i=0;i<n;i++)
            sz = min(sz, (int)strs[i].length());
        for(int i=0;i<sz;i++){
            bool ok = 1;
            for(int j=1;j<n;j++){
                if(strs[j][i]!=strs[0][i]){
                    ok = 0;
                    break;
                } 
            }
            if(ok) ans += strs[0][i];
            else break;
        }
        return ans;
    }
};