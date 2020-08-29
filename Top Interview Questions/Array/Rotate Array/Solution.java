class Solution {
    public void rotate(int[] nums, int k) {
       int n = nums.length;
       int[] res = new int[n+10];
       k %= n;
       for(int i=k; i<n; i++){
           res[i] = nums[i-k];
       }
       for(int i=0; i<k; i++){
           res[i] = nums[i+n-k];
       }
       for(int i=0; i<n; i++){
            nums[i] = res[i];
       }
       return ;
    }
}