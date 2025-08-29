class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = head;
        ListNode* ans = head;
        while(temp != NULL && temp->next != NULL){
            ans = ans->next;
            temp = temp->next->next;
        }
        return ans;
    }
};
