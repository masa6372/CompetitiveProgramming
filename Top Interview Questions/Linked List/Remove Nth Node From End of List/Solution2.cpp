#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * Definition for singly-linked list.
 * 
*/

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0);
        res->next = head;
        ListNode* first;
        ListNode* second;
        first = head, second = head;
        for (int i=0; i<n; i++) {
            first->next;
        }
        while (first != nullptr) {
            first->next;
            second->next;
        }
        second->next->next;
    }
};