#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode* tmp = head;
       int length = 0;
       vector<int> res;
       while (tmp != nullptr) {
           res.push_back(tmp -> val);
           tmp = tmp -> next;
           length++;
       }
       for(int i=0; i<length; i++) {
           if(res[i] != res[length-i-1]) {
               return false;
           }
       }
       return true;
    }
};