// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode *start=new ListNode(101);
//         ListNode *n=start;
//         int match=101;
//         while(head){
//             if(head->next){
//                 if(head->val == head->next->val){
//                     match=head->val;
//                 }
//             }
//             if(match != head->val){
//                 n->next=head;
//                 n=head;
//             }
//             head=head->next;
//         }
//         n->next=NULL;
//         return start->next;
//     }
// };

