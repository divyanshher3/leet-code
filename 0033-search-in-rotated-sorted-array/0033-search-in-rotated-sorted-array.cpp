class Solution {
public:
int getpovit(vector<int>& nums){
    int s = 0;
    int e = nums.size() - 1;

    if(nums[s] <= nums[e])
        return 0;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(nums[mid] >= nums[0])
            s = mid + 1;
        else
            e = mid;
    }

    return s;
}

int binarysearch(vector<int>& nums ,int s , int e, int target){
   
    while(s<=e){
    int mid = s+(e-s)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]> target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int pivot = getpovit(nums );
        if(target >= nums[pivot] && target <= nums[nums.size()-1] ){
        return binarysearch( nums , pivot , nums.size()-1, target);
        }
        else{
            return binarysearch(nums , 0 , pivot-1, target);
        }
    }
};