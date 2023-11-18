*/
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        //Your code here
          Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            curr->prev = next;
            prev = curr;
            curr = next;
        }

        
        return prev;
    }
};
