class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
            return head;
        else{
            ListNode *ptr = head;
            ListNode *ptr2 = head;
            while(ptr2!=nullptr && ptr2->next!=nullptr){
                ptr = ptr->next;
                ptr2 = ptr2 -> next ->next;
            }
            return ptr;
        }
    }
};