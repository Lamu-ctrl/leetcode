/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *dummy= new Node(0);
        Node *curr=dummy;
        Node *ori=head;
        //total two pass ; 
        //first build new linkedlist only have next also build two maps 
        //second pass assing random by cheak map;
        map<int,Node*> nmap;
        map<Node*,int> map;
        for(int i=0;ori!=NULL; i++){
            curr->next=new Node(0);
            curr=curr->next;
            curr->val=ori->val;
            nmap[i]=curr;
            map[ori]=i;
            ori=ori->next;            
        }
        //second pass;
        curr=dummy->next;//index 0
        ori=head;//index 0
        for(int i=0;ori!=NULL; i++){
            if(ori->random == NULL) curr->random=NULL;
            else    curr->random = nmap[ map[ori->random] ];
            
            curr=curr->next;
            ori=ori->next;            
        }        

        return dummy->next;
    }
};

/*
Constraints:

0 <= n <= 1000
-104 <= Node.val <= 104
Node.random is null or is pointing to some node in the linked list.
*/
