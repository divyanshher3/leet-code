class Solution {
public:
    string compressedString(string word) {
        int i = 0;
        int n = word.length();
        string ans = "";
        while(i<n){
            int j = i+1;
                while(j<n && word[i] == word[j]){
              j++;
                }
                int count = j-i;
                while(count > 9){
                    ans += '9';
                    ans+=word[i];
                   count-=9;
                }
                if(count > 0 ){
                 string cnt = to_string(count);
                 ans+=cnt;
                 ans+=word[i];
                }

                i = j;
        }
        return ans;

    }
};