class Solution {
    public int countSpecialIntegers(int[] nums) {
        int c =0;
        for(int x=1; x<=100;x++){
            boolean f = false;
            boolean s = false;
            for(int i=0;i<nums.length;i++){
                if(nums[i]==x){
                    if(f && nums[i-1]!=x){
                        s= true;
                        break;
                    }
                    f=true;
                }
            }
            if(f && !s){
                c++;
            }
        }
        return c;
    }
}
