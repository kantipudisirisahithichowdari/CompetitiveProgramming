class Solution {
    public int resilientSubarray(int[] nums, int k) {
        int n = nums.length;
        int best = 0;

        for (int l = 0; l < n; l++) {
            long su = 0;
            int r = nums[l] % k;
            boolean sr = true;
            for (int ri = l; ri < n; ri++) {
            su += nums[ri];
            if (nums[ri] % k != r) {
            sr = false;
                }
             if (sr && su % k == r) {
                    best = Math.max(best, ri - l + 1);
                }
            }
        }
        return best;
    }
}
