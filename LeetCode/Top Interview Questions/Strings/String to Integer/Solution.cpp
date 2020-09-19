#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string createNum(string s) {
        int len = s.size();
        string res = "";
        for (int i=0; i<len; i++) {
            int tmp = 1;
            while (s[i] == s[i+1] && i <len-1) {
                tmp++;
                i++;
            }
            res.append(tmp + "0");
            res += s[i-1];
        }
        return res;
    }
    string countAndSay(int n) {
        string t = createNum("1");
        for (int i=1; i<n; i++) {
            t = createNum(t);
        }
        return t;
    }
};