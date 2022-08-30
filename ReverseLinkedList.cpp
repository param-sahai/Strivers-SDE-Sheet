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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next == nullptr)
            return head;
        else{
            ListNode* prev = nullptr;
            ListNode* curr = head;
            ListNode* nxt = curr -> next;
            while(nxt!=nullptr){
                curr->next = prev;
                prev = curr;
                curr = nxt;
                nxt = nxt -> next;
            }
            curr->next=prev;
            return curr;
        }
        
    }
};