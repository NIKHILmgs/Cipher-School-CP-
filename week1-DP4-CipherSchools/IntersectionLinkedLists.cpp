class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> st;
        if(!headA or !headB)
        return NULL;
        while(headA){
            st.insert(headA);
            headA=headA->next;
        }
        while(headB){
            if(st.find(headB)!=st.end())
            return headB;
            headB=headB->next;
        }
        return NULL;
    }
};