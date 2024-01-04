class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;int n=prices.size(),i;
        vector<int>v;
        for(i=n-1;i>=0;--i)
        {
            while(!st.empty() && st.top()>prices[i])
                st.pop();
               if(st.empty())
               v.push_back(prices[i]);
                 else if(!st.empty())
                 v.push_back(prices[i]-st.top());
                 st.push(prices[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};