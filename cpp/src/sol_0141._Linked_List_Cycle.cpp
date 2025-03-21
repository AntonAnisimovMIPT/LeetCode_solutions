struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x)
        : val(x), next(nullptr) {}
};

// classic technique: fast and slow pointers method
class Solution {
  public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};