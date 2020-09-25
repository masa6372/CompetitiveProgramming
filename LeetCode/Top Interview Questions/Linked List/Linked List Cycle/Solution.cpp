#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* res = head;
        map<ListNode*, int> mp;
        while (res != nullptr) {
            mp[res]++;
            if(mp[res] == 2) {
                return true;
            }
            res = res -> next;
        }
        return false;
    }
};