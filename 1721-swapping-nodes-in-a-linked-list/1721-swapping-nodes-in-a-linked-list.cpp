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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* start =head;
        ListNode* end = head;
        ListNode* last = head;
        
        while(last->next != NULL){
            if(k<=1){
                start= start->next;
            }else{
                k--;
                end = end ->next;
            }
            last = last->next;
        }
        swap(start->val,end->val);
        return head;
    }
};