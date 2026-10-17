class Solution {
    public int[] rearrangeArray(int[] nums) {
        int freq[] = new int[101];
        for(int num:nums){
            freq[num]++;
        }
        int[] r = new int[nums.length];
        int x=0;
        while(x<nums.length){
            for(int v=1;v<=100;v++){
                if(freq[v]>0){
                    r[x++]=v;
                    freq[v]--;
                }
            }
        }
        return r;
    }
}
