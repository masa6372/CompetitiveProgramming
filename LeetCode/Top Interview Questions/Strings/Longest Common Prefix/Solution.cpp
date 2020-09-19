#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) {
            return "";
        }
        int len = strs.size();
        string res;
        string ans = strs[0];
        for (int i=1; i<len; i++) {
            res = ans;
            ans = "";
            int len1 = res.size();
            for (int j=0; j<len1; j++) {
                if (strs[i][j] == res[j]) {
                    ans += res[j];
                } else {
                    break;
                }
            }
        }
        return ans;
    }
};