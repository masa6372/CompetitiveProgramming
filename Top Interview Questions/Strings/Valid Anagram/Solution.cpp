#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1, mp2;
        int len1 = s.length();
        int len2 = t.length();
        if (len1 != len2) {
            return false;
        }
        for(int i=0; i<len1; i++) {
            mp1[s[i]]++;
        }
        for(int i=0; i<len2; i++) {
            mp2[t[i]]++;
        }
        if (mp1.size() != mp2.size()) {
            return false;
        }
        if(mp1 != mp2) {
            return false;
        }
        return true;
    }
};