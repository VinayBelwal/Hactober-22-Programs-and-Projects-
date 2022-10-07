class mycomp{
    public:
    bool operator()(ListNode* a,ListNode * b){
        return (a->val)>(b->val);
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)
            return nullptr;
        priority_queue<ListNode* ,vector<ListNode*>,mycomp>q;
        for(int i=0;i<n;i++){
            if(lists[i]!=nullptr)
                q.push(lists[i]);
        }
        if(q.empty())
            return nullptr;
        ListNode * head=q.top();
        if(head->next!=nullptr)
            q.push(head->next);
        q.pop();
        ListNode * temp=head;
        while(!q.empty()){
            auto u=q.top();
            q.pop();
            if(u->next!=nullptr)
                q.push(u->next);
            temp->next=u;
            temp=u;
        }
        return head;
    }
};
