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

    ListNode* reverse(ListNode *head){
        ListNode* temp=head, *prev = NULL;
        while(head){
            temp=head->next;
            head->next = prev;
            prev=head;
            head = temp;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp) {
            count++;
            temp=temp->next;
        }
        int mid = count/2;
        temp=head;
        while(mid>1){temp=temp->next; mid--;}
        temp->next = reverse(temp->next);
        ListNode *first = head, *second = temp->next;
        int ans = -1;
        while(second){
            ans = max(ans, first->val+second->val);
            first=first->next;
            second=second->next;
        }
        return ans;
    }
};