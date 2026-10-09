class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> se(nums.begin() , nums.end());
        int longest = 0;
       for(int x : se){
        if(se.find(x-1) == se.end()){
            int current = x;
            int count =1;
        
        while(se.find(current+1) !=se.end()){
            current++;
            count++;
        }
        longest = max(longest , count);
       }
    }

    return longest;
    }
};