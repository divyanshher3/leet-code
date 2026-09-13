class Solution {
    
public:
    string removeDuplicates(string s) {
     int    top = -1;
     string ans = "";
        for(char c : s){
     if(top>=0 && ans[top] == c){
        ans.pop_back();
        top--;
        }
        else{
            ans.push_back(c);
            top++;
        }
    }
    return ans;
    }
};