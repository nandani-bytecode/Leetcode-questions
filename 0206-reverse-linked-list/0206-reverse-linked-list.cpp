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
     
     ListNode *Reverese(ListNode *curr,ListNode *prev){
        if(curr==NULL){
            return prev;
        }
        ListNode *fut = curr->next;
        curr->next = prev;
        return Reverese(fut,curr);
     }

    
    ListNode* reverseList(ListNode* head) {
        
        //method 1, just changing the values not addresses
        // vector<int> ans;
        // ListNode *temp = head;

        // while(temp!=NULL){
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }

        // int i = ans.size()-1;
        // temp = head;

        // while(temp){
        //     temp->val = ans[i];
        //     i--;
        //     temp = temp->next;
        // }

        // return head;


        //method 2, reversing whole linked list along with address
        // ListNode *curr = head,*prev = NULL,*fut = NULL;

        // while(curr){
        //     fut = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = fut;
        // }

        // head = prev;
        // return head;


        //method 3 ,method 2 with recursion

        return Reverese(head,NULL);
    }
};