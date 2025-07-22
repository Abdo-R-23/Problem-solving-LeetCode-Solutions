class Solution {
    public int[] runningSum(int[] nums) {
        int[] newarray = new int[nums.length];
        newarray[0] = nums[0];
        for(int i=1;i<nums.length;i++){
            newarray[i] = newarray[i-1] + nums[i];
        }
        return newarray;
        
    }
}