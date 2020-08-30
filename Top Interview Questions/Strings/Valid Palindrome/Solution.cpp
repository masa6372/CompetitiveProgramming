#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        vector<char> res;
        for (int i=0; i<len; i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] += 32;
                }
                res.push_back(s[i]);
            }
        }       
        int size = res.size();       
        for (int i=0; i<size/2; i++) {
            if(res[i] != res[size-i-1]) {
                return false;
            }
        }
        return true;
    }
};