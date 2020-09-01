#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        if (len1 >= len2 && len2 == 0) {
            return 0;
        }
        if (len1 < len2 || len2 == 0) {
            return -1;
        } else {
            for (int i=0; i<len1; i++) {
                if (haystack[i] == needle[0]) {
                    string s = haystack.substr(i, len2);
                    if (s == needle) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};