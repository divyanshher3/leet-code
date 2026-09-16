class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count =0;
        vector<int>ans;
        int Rowsize = matrix.size();
        int Colsize = matrix[0].size();
        int total = Rowsize*Colsize;

        int Startingrow = 0;
        int Startingcol = 0;
        int Endingrow = Rowsize - 1;
        int Endingcol = Colsize -1;


        while(count < total ){
            for(int index = Startingcol ;count < total && index <= Endingcol ; index++){
                ans.push_back(matrix[Startingrow][index]);
                count++;
            }
            Startingrow++;
            for(int index  =Startingrow ;count < total && index<=Endingrow ; index++ ){
                ans.push_back(matrix[index][Endingcol]);
                count++;
            }
            Endingcol--;
            for(int index = Endingcol ;count < total && index>= Startingcol ; index--){
                ans.push_back(matrix[Endingrow][index]);
                count++;
            }
            Endingrow--;
            for(int index = Endingrow ;count < total &&index >=Startingrow ;index--){
                ans.push_back(matrix[index][Startingcol]);
                count++;
            }
            Startingcol++;
        }
        return ans;
    }
};