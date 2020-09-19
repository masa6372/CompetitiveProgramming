#include <iostream>
#include <string>
#include <vector>
#include <map>
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
    ListNode* reverseList(ListNode* head) {
        ListNode* res = head;
        ListNode* ans = nullptr;
        while(res != nullptr) {
            ListNode* nextTemp =  res -> next;
            res -> next = ans;
            ans = res;
            res = nextTemp;
        }        
        return ans;
    }
};