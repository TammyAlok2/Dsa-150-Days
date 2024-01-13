Node* insertionSort(struct Node* head)
    {
        Node *prev = head;
        Node *temp = head->next;
        Node *next;
        while(temp){
            Node *first = head;
            next = temp->next;
            if(first->data>temp->data){
                prev->next=temp->next;
                temp->next = head;
                head=temp;
                temp=next;
                continue;
            }
            else{
                while( first->next!=temp && first->next->data<temp->data){
                    first=first->next;
                }
                if(first->next->data>=temp->data && first->next!=temp){
                    prev->next = temp->next;
                    temp->next = first->next;
                    first->next = temp;
                }
                else{
                    prev=prev->next;
                }
            }
            temp=next;
        }
        return head;
    }
