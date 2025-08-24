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
    ListNode* deleteMiddle(ListNode* head) {
        //count nodes first = n
        //calculate n/2 - floor value
    //then run a loop and stop at the node before the middle one and do the shifting
    //to run loop :  int count = n/2;
    //while(count>0) move ahead
        
        if(!head) return head;

        int count =0;
        ListNode* temp = head;
        while(temp) {
            count++;
            temp=temp->next;
        }

        if(count==1) return NULL;
        int mid = count/2;
        temp=head;
        while(mid>1){
            temp=temp->next;
            mid--;
        }
        // cout<<temp->val;
        if(temp->next) temp->next = temp->next->next;
        return head;
    }
};