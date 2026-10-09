class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> se;
    int count=1;
        for(int i  = 0 ; i < nums.size() ; i++){
            se.insert(nums[i]);  
        }

        vector<int> v (se.begin() , se.end());
        sort(v.begin() , v.end());
        int longest = 1;
        for(int i = 1 ; i <v.size() ;i++){
            if(v[i]== v[i-1]+1 ){
                count++;
            }
            else{
                count =1;
            }
            longest = max(longest , count);
        }
        return longest;
    }
};