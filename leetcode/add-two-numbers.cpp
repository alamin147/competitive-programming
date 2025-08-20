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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        vector<int>v;
        while(l1&&l2)
        {
            int sum=(l1->val+l2->val+carry)%10;
            carry=(l1->val+l2->val+carry)/10;
            v.push_back(sum);
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            int sum=(l1->val+carry)%10;
            carry=(l1->val+carry)/10;
            v.push_back(sum);
            l1=l1->next;
        }
        while(l2)
        {
            int sum=(l2->val+carry)%10;
            carry=(l2->val+carry)/10;
            v.push_back(sum);
            l2=l2->next;
        }
        if(carry>0)
        {
            v.push_back(carry);
        }

        for(auto i:v)
        {
           insertAtTail(i);

        }

        return head;

    }
    private:
    void insertAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};
