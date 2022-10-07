class Solution {
public:
    int trap(vector<int>& H) {
        int n=H.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()<H[i])
                st.pop();
            if(st.empty()){
                ans[i]=H[i];
                st.push(H[i]);
            }
            else
                ans[i]=st.top();
        }
        while(!st.empty())
            st.pop();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<H[i])
                st.pop();
            if(st.empty()){
                ans[i]=min(H[i],ans[i]);
                st.push(H[i]);
            }
            else
                ans[i]=min(st.top(),ans[i]);
        }
        int res=0;
        for(int i=0;i<n;i++)
            res+=ans[i]-H[i];
        return res;
    }
};
