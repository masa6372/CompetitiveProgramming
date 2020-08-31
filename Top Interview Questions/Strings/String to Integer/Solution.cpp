#include<climits>
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        long long ans = 0;
        int len = str.length();
        string s = str;
        bool flag = true;
        for (int i=0; i<len; i++) {
            if (s[i] != ' ') {
                if ((s[i] == '+' && (s[i+1] > '9' || s[i+1] < '0')) || (s[i] == '-' && (s[i+1] > '9' || s[i+1] < '0'))) {
                    return 0;
                }
                else if ((s[i] >= '0' && s[i] <= '9') || s[i] == '+' || s[i] == '-') {
                    if (s[i] == '-') {
                        flag = false;
                    } else if (s[i] >= '0' && s[i] <= '9') {
                        while (s[i] >= '0' && s[i] <= '9' ) {
                            ans += (s[i] - '0');
                            ans *= 10;
                            i++;
                            if (ans / 10 > INT_MAX && flag)
                            {
                                return INT_MAX;
                            }
                            else if (!flag)
                            {
                                if (ans / 10 > INT_MAX)
                                {
                                    return INT_MIN;
                                }
                            }
                        }
                        if(!flag) ans*=-1;
                        return ans/10;
                    }
                } else{
                    return 0;
                }
            }
            if (ans / 10 > INT_MAX && flag) {
                return INT_MAX;
            }
            if (!flag) {
                ans *= -1;
                if (ans / 10 < INT_MIN) {
                    return INT_MIN;
                }
            }
        }
        return ans/10;
    }
};