class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> uset;
        ListNode* cur=head;
        while(cur!=NULL){
            if(uset.count(cur)==0){
                uset.insert(cur);
            }
            else{
                return cur;
            }
            cur=cur->next;
        }
        return NULL;
    }
};
