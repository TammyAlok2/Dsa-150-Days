link:https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1
class Solution
{
    public:
    Node* arrange(Node*odd){

        if(odd->next == NULL)  return odd ;        

        if(odd->next->next == NULL)

         return odd->next;      

        Node* in = odd->next;

        odd->next = in->next;

        arrange(odd->next)->next = in;

        in->next = NULL;       

        return in;

    }   

    void rearrange(struct Node *odd)    {

       arrange(odd);    

    }


};
