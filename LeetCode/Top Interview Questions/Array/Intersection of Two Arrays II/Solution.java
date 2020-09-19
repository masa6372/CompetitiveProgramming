import java.util.*;
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        ArrayList<Integer> res = new ArrayList<Integer>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int tmp1=0, tmp2=0;
        int j=0;
        boolean flag = false;
        while(tmp1 < n1){
            if(flag == true) {
                tmp2 = j+1;
                j++;
            }else{
                tmp2 = j;
            }
            while(tmp2 < n2){
                if(nums1[tmp1] == nums2[tmp2]){
                    flag = true;
                    res.add(nums1[tmp1]);
                    j = tmp2;
                    break;
                }
                tmp2++;
                flag = false;
            }
            tmp1++;
        }
        int[] ans = new int[res.size()];
        for(int i=0; i<res.size(); i++){
            ans[i] = res.get(i);
        }
        return ans;
    }
}