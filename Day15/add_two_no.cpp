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
    private:
    ListNode*reverse(ListNode*head){
        ListNode*current=head;
        ListNode*prev=NULL;
        ListNode*front=NULL;
        while(current!=NULL){
            front=current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
    void insertattail(ListNode*& head,ListNode*& tail,int val){
        ListNode*temp=new ListNode(val);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        return;
    }
    ListNode* add(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode*ansHead=NULL;
        ListNode*ansTail=NULL;
        while(l1!=NULL && l2!=NULL){
            int sum = carry+l1->val+l2->val;
            int digit=sum%10;
            insertattail(ansHead,ansTail,digit);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int sum = carry+l1->val;
            int digit=sum%10;
            insertattail(ansHead,ansTail,digit);
            carry=sum/10;
            l1=l1->next;
        }
         while(l2!=NULL){
            int sum = carry+l2->val;
            int digit=sum%10;
            insertattail(ansHead,ansTail,digit);
            carry=sum/10;
            l2=l2->next;
        }
        while(carry!=0){
            int sum = carry;
            int digit=sum%10;
            insertattail(ansHead,ansTail,digit);
            carry=sum/10;
        }
        return ansHead;
    }
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        //Code mein phle se hi reverse krkr diya hai 
        // l1=reverse(l1);
        // l2=reverse(l2);
        ListNode*ans=add(l1,l2);
        // ans=reverse(ans);
        return ans;
    }
};

// Dry run for insertattail fxn 
/*
Insert 7:
head=NULL, tail=NULL
head=tail=7

Insert 0:
tail->next=0
tail=0

7 -> 0

Insert 8:
tail->next=8
tail=8

7 -> 0 -> 8
*/

//for add fxn 
/*
1. Add while both lists exist
   (l1 && l2)

2. If l1 still has nodes
   process remaining l1 + carry

3. If l2 still has nodes
   process remaining l2 + carry

4. If carry still exists
   create extra node(s)

5. Return ansHead
*/