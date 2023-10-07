//link:https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
             if(head->next == NULL){
            return head;
        }
        Node *odd = head;
        Node *even = head->next;
        Node *ans = even;
        Node *prev = NULL;
        while(odd != NULL and odd -> next != NULL){
            odd -> next = even -> next;
            even -> next = odd;
            if(prev != NULL)
                prev -> next = even;
            
            prev  = odd;
            odd = odd -> next ;
            if(odd  != NULL)
                even = odd -> next;
            
        }
        return ans;
    }
};
