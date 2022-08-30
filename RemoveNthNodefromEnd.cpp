class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)
            return head;
        ListNode *fast = head;
        ListNode *slow = head;
        while(n--){
            fast = fast->next;
        }
        if(fast==nullptr)
            return head->next;
        while(fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};