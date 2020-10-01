#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

bool isPrime(int x) {
    for(int i=2; i<=sqrt(x); i++) {
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

class Solution {
public:
    int countPrimes(int n) {
       if(n < 3) {
           return 0;
       }        
       int ans = 0;
       for (int i=2; i<n; i++) {
           if (isPrime(i)){
               ans++;
           }
       }
       return ans;
    }
};