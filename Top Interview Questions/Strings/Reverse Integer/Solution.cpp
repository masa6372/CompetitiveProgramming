#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> func(int x){
        vector<int> res;
        while(x){
            res.push_back(x % 10);
            x /= 10;
        }
        return res;
    }
    int reverse(int x) {
        bool flag = false;
        if(x < 0){
            flag = true;
            x *= -1;
        }
        while(x % 10 == 0){
            x /= 10;
        }
        vector<int> tmp = func(x);
        int ans = 0;
        for(int i=0; i<tmp.size(); i++){
            ans += tmp[i];
            ans *= 10;
        }
        ans /= 10;
        if(flag) ans *= -1;
        return ans;
    }
};