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
           int len = 0;
           ListNode* first = head;
           while (first != nullptr) {
               len++;
               first = first->next;
           }
           len-=n;
           first = res;
           while (len) {
               len--;
               first = first->next;
           }
           first->next = first->next->next;
           return res->next;
    }
};