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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(), nums.end());

        ListNode* temp = new ListNode();
        ListNode* temp1 = temp;
        temp->next = head;
        while(temp1->next != NULL){
            if(s.count(temp1->next->val)){
                temp1->next = temp1->next->next;
            }
            else temp1 = temp1->next;
        }
        return temp->next;
    }
};
