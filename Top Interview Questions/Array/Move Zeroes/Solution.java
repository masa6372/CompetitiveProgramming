import java.util.*;
class Solution {
    public void moveZeroes(int[] nums) {
        int len = nums.length;
        ArrayList<Integer> res = new ArrayList<Integer>();
        for(int i=0; i<len; i++){
            if(nums[i] != 0){
                res.add(nums[i]);
            }
        } 
        while(res.size() < len){
            res.add(0);
        }
        for(int i=0; i<len; i++){
            nums[i] = res.get(i);
        }
        return;
    }
}