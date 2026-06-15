//Slower method for calculating gcd

// by euclidds theorem , gcd of two numbers can be calculated by
// gcd(a,b)=gcd(a-b,b)
// where a>b 

// whenever any value btw a or b becomes 0  in gcd(a-b,b) , then the other part becomes the answer like 
// gcd(0,6) , ans is 6 
// gcd(12,18)=gcd(6,12)=gcd(6,6)=gcd(0,6)

// enhanced 
// gcd(a,b)=gcd(a%b,b)


class Solution {
public:
    int find_gcd(int a , int b){
        if(b==0){
            return a;}
        return find_gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL){
            return head ; // case of 1 node only }
        ListNode*curr=head;
        while(curr->next!=NULL){
            int gcd=find_gcd(curr->val,curr->next->val);
            ListNode*gcd_node =new ListNode(gcd);
            gcd_node->next = curr->next;
            curr->next = gcd_node;
            curr = gcd_node->next;
        }
        return head;
    }
}
};
// Tc->logx(min(a,b)) of gcd +O(n) of ll