class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        
        if (ptrA == NULL || ptrB == NULL) return NULL;
        while(ptrA!=nullptr && ptrB!=nullptr && ptrA!=ptrB){
            ptrA = ptrA->next;
            ptrB = ptrB->next;
            if(ptrA==ptrB)
                return ptrA;
            if(ptrA==nullptr)
                ptrA=headB;
            if(ptrB==nullptr)
                ptrB=headA;
        }
        return ptrA;
    }
};