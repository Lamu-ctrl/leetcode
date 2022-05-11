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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;
        map< int , ListNode*> map;
        auto curr=head;
        for(int i=1;curr!=NULL;i++ ){
            map[i]=curr;
            curr=curr->next;
        }
        if(map.size() ==0){
            return head;
        }
        int del=map.size()-n+1;

        //to avoid del= final node
        if(n==1){
            if(map.size()==1){
                return NULL;
            }
            map[del-1] ->next =NULL;
        }
        else if(map.size()==n){
            return head->next;
        }
        else
            map[del-1] ->next = map[del+1];
        
        return head;
    }
};

/*
Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/
