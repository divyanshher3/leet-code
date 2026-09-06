class Solution {
public:
    string addSpaces(const string s,const vector<int>& spaces) {
        string ans = "";
        ans.reserve(s.length() + spaces.size());
        int j= 0;
        for(int i = 0 ; i < s.length() ; i++){
             string temp = "";
             
                if(j<spaces.size() && i == spaces[j]){
                    ans += " ";
                    j++;
                }

                ans += s[i]; 
            }

            return ans;
        }       
    
};