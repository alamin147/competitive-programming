class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        ListNode* a = list1;
        ListNode* b = list2;

        while (a && b) {
            if (a->val < b->val) {
                append(&head, &tail, a->val);
                a = a->next;
            } else {
                append(&head, &tail, b->val);
                b = b->next;
            }
        }


        while (a) {
            append(&head, &tail, a->val);
            a = a->next;
        }
        while (b) {
            append(&head, &tail, b->val);
            b = b->next;
        }

        return head;
    }

private:
    void append(ListNode** head, ListNode** tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (!*head) {
            *head = *tail = newNode;
        } else {
            (*tail)->next = newNode;
            *tail = newNode;
        }
    }
};
