class Solution {
    public int[] maxProductPair(int[] nums, int target) {
        int bp = Integer.MIN_VALUE;
        int[] ans = {-1,-1};
        for(int i=0;i<nums.length;i++){
            for(int j=0;j<nums.length;j++){
                if(i!=j && nums[i]>nums[j]&& nums[i]+nums[j]==target){
                    int pr = nums[i]*nums[j];
                    if(pr>bp){
                        bp = pr;
                        ans = new int[]{i,j};
                    }
                } 
            }
        }
        return ans;
    }
}
