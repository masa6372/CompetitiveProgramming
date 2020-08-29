class Solution {
    public int maxProfit(int[] prices) {
        int res = prices[0], tmp = prices[0];
        int sum = 0;
       for(int i=1; i<prices.length; i++) {
           if(prices[i-1] <= prices[i]){
               tmp = prices[i];
               if(i == prices.length-1 && tmp > res) {
                  sum += (tmp - res); 
               }
           } else{
               sum += (tmp - res);
               tmp = prices[i];
               res = prices[i];
           }
       } 
       return sum;

    }
}