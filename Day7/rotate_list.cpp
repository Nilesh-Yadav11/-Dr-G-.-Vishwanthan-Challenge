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
    ListNode*find_node(ListNode*temp,int k){
        int count=1;
        while(temp!=NULL){
            if(count==k){
                return temp;
            }
            count++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*tail=head;
        int length=1;
        while(tail->next!=NULL){
            tail=tail->next;
            length++;
        }
        if(k%length==0){
            return head;
        }
        k=k%length; // as 13%5=3 , we have to find for 3rd rotation only 
        tail->next=head;
        ListNode*newNode=find_node(head,length-k);

        // head update
        head=newNode->next;
        newNode->next=NULL;

        return head;
    }
};