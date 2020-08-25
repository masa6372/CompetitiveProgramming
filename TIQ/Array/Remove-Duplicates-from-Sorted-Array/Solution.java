import java.util.*;
class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0)return 0;
        ArrayList<Integer> ans = new ArrayList<Integer>();
        ans.add(nums[0]);
        for(int i=1; i<nums.length; i++){
            if(nums[i] != nums[i-1]){
               ans.add(nums[i]); 
            }
        }
        for(int i=0; i<ans.size(); i++){
            nums[i] = ans.get(i);
        }
        return ans.size();
    }
}