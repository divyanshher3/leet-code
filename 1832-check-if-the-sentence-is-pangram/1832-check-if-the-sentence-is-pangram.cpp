class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool isfound[26] = {false};

        for(char c :  sentence){
            isfound[c - 'a']=true;
        }
        for(int i = 0 ; i < 26; i++){
            if(isfound[i] == false){
                return false;
            }
        }
        return true;
    }
};