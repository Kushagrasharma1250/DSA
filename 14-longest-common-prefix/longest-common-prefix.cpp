class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ot="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<first.length();i++){
            if(first[i]!=last[i]){
                return ot;
            }
            ot+=first[i];
        }
        return ot;
    }
};