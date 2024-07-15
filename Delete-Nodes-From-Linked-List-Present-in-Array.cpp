
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        ListNode newHead(0);
        newHead.next = head;
        ListNode *current = &newHead;
        while (current->next)
        {
            if (nums_set.find(current->next->val) != nums_set.end())
            {
                current->next = current->next->next;
            }
            else
            {
                current = current->next;
            }
        }
        return newHead.next;
    }
};