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

public:
int countNode(ListNode* head)
    {
        ListNode* tmp=head;
        int i=0;
        while(tmp)
        {
            i++;
            tmp=tmp->next;
        }
        return i;
    }
    ListNode* rotateRight(ListNode* head, int k) {

       if (!head || !head->next || k == 0) return head;

        int n = countNode(head);
        k %= n;
        if (k == 0) return head;

        ListNode* tail = head;
        while (tail->next) tail = tail->next;
        tail->next = head;

        int steps = n - k;
        ListNode* newTail = head;
        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;

    }
};
