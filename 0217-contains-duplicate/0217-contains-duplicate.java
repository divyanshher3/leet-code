class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer>ha=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            if(ha.contains(nums[i]))
            {
                return true;
            }
            ha.add(nums[i]);
        }
        return false;
    }
}