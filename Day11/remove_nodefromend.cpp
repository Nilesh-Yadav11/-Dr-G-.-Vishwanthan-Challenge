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
    
    ListNode* removeNthFromEnd (ListNode* head, int n) {
        ListNode* temp = head;

    for(int i = 1; i <= n; i++) {
        temp = temp->next;
        }

    if(temp == NULL) {
        ListNode* result = head->next;
        delete(head);
        return result;
    }
    ListNode* prev = head;

    while(temp != NULL && temp->next != NULL){
        prev = prev->next;
        temp = temp->next;
        }
    ListNode*delhaed=prev->next;
    prev->next = prev->next->next;
    delete(delhaed);
    return head;
    }
};

// Example

// List:

// 1 -> 2 -> 3 -> 4 -> 5

// and

// n = 2

// We need to remove the 2nd node from the end, which is 4.

// Step 1: Initialize
// ListNode* temp = head;
// temp
//  ↓
// 1 -> 2 -> 3 -> 4 -> 5
// Step 2: Move temp n steps ahead
// for(int i=1;i<=n;i++){
//     temp=temp->next;
// }
// i = 1
// 1 -> 2 -> 3 -> 4 -> 5
//      ↑
//     temp
// i = 2
// 1 -> 2 -> 3 -> 4 -> 5
//           ↑
//          temp

// Now temp is 2 nodes ahead of head.

// Step 3: Check if head must be deleted
// if(temp==NULL)

// Here temp points to 3, so condition is false.

// Step 4: Start prev from head
// ListNode* prev = head;
// prev
//  ↓
// 1 -> 2 -> 3 -> 4 -> 5
//           ↑
//          temp
// Step 5: Move both pointers
// while(temp != NULL && temp->next != NULL){
//     prev = prev->next;
//     temp = temp->next;
// }
// Iteration 1
// 1 -> 2 -> 3 -> 4 -> 5
//      ↑         ↑
//     prev      temp
// Iteration 2
// 1 -> 2 -> 3 -> 4 -> 5
//           ↑         ↑
//          prev      temp

// Now:

// temp->next == NULL

// So loop stops.

// Notice:

// prev = 3
// prev->next = 4

// The node to delete is exactly prev->next.

// Step 6: Delete node
// ListNode* delhead = prev->next;
// 1 -> 2 -> 3 -> 4 -> 5
//                ↑
//            delhead
// prev->next = prev->next->next;
// 1 -> 2 -> 3 ------> 5

// Node 4 is disconnected.

// delete(delhead);

// Memory of node 4 is freed.

// Result:

// 1 -> 2 -> 3 -> 5