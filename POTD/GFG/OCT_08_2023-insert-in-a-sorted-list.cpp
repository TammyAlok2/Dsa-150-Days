//link:https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
                Node* newNode = new Node(data);
        if(head == NULL) return newNode;
        
        Node* ptr = head;
        if(ptr -> data > data){
            newNode -> next = ptr;
            head = newNode;
            
            return head;
        }
        
        while(ptr -> next && ptr -> next -> data < data) ptr = ptr -> next;
        
        newNode -> next = ptr -> next;
        ptr -> next = newNode;
        
        return head;

    }
};
