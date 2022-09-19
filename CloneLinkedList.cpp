/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //Step 1:Creating DEEP copies
        Node* iter = head, *front = head;
        while(iter!=nullptr){
            front = iter->next;
            Node *copy=new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter=front;
        }
        
        //Step 2: Handling the random pointers of deep copy Nodes
        iter = head;
        while(iter!=nullptr){
            if(iter->random!=nullptr)
                iter->next->random = iter->random->next;
            iter = iter->next->next;
        }
        
        //Step 3: Linking and Delinking of the Deepcopies
        iter = head;
        Node* pseudo_head = new Node(0);
        Node *copy = pseudo_head;
        while(iter!=nullptr){
            front = iter->next->next;
            copy->next = iter->next;
            iter->next = front;
            copy = copy->next;
            iter = iter->next;
        }
        return pseudo_head->next;
    }
};