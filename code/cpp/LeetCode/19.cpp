class Solution {
public:
    void pass(ListNode* ptr, int &i, int n){
        if(!ptr){
            return;
        }
        
        pass(ptr->next, i, n);
        if(i!=n){
            i++;
            return;
        }
        else{
            ptr->next = ptr->next->next;
            i++;
            return;
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        pass(head, i, n);
        if(i==n)
            return head->next;

        return head;
    }
};