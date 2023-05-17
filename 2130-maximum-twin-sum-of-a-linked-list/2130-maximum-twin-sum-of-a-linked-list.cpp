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
    int pairSum(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;

        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*nextNode,*prev = NULL;
        while(slow)
        {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        int maxsum = 0;
        ListNode*left = head;
        while(prev)
        {
            maxsum = max(maxsum, prev->val+left->val);
            prev = prev->next;
            left = left->next;
        }
        return maxsum;
    }
};