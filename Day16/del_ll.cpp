/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // we are just directly given the node to be nodr to be deleted which is node 
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* nextnode=node->next;
        node->val=nextnode->val;
        node->next=nextnode->next;
        delete nextnode;
    }
};