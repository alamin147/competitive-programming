/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* head;
    ListNode* tail;
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<vector<int>>p;
        int i=0;
        multiset<int>temp;
        for(auto l:lists)
        {
            ListNode* temphead=l;
            while(temphead)
            {
                temp.insert(temphead->val);
                temphead=temphead->next;
            }
        }
        for(auto t:temp)
        {
            insertAtTail(t);
        }
        return head;
    }
    private:

      void insertAtTail(int x) {
        ListNode* node = new ListNode(x);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
};
