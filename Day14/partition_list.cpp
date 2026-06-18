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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode*dummy_1=new ListNode(0);
        ListNode*dummy_2=new ListNode(0);

        ListNode*before=dummy_1;
        ListNode*after=dummy_2;

        while(head){
            if(head->val<x){
                before->next=head;
                before=before->next;
            }
            else{
                after->next=head;
                after=after->next;
            }
            head=head->next;
        }
        after->next=NULL;
        before->next=dummy_2->next;
        return dummy_1->next;
    }
};

//Dry run 
/*
Input:
1 -> 4 -> 3 -> 2 -> 5 -> 2, x = 3

beforeDummy -> NULL
afterDummy  -> NULL

1 (<3)
before: 1

4 (>=3)
after: 4

3 (>=3)
after: 4 -> 3

2 (<3)
before: 1 -> 2

5 (>=3)
after: 4 -> 3 -> 5

2 (<3)
before: 1 -> 2 -> 2

before: 1 -> 2 -> 2
after : 4 -> 3 -> 5

after->next = NULL
before->next = afterDummy.next

Result:
1 -> 2 -> 2 -> 4 -> 3 -> 5
*/