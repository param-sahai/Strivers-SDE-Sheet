class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return head;
        ListNode* ptr = head;
        int count=0;
        while(ptr!=nullptr){
            count++;
            ptr=ptr->next;
        }
        if((abs(count-k)%count)==0) return head;
        ListNode* prev=head;
        for(int i=2;i<=(abs(count-(k%count)));i++){
            prev=prev->next;
        }
        ListNode* start = prev->next;
        ListNode* end = start;
        while(end!=nullptr && end->next!=nullptr){
            end=end->next;
        }
        prev->next=end->next;
        end->next=head;
        head=start;
        return head;
    }
};