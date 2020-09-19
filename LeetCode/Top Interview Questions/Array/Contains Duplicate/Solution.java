import java.util.*;
class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n = nums.length;
       Set<Integer>set = new HashSet<Integer>();
       for(int i=0; i<n; i++){
           set.add(nums[i]);
       }
       return set.size() != n;
    }
}