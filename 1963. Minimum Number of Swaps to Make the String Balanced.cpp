class Solution {
public:
    int minSwaps(string s) {
       int open = 0;
       int ans = 0;
       for (int i=0;i<s.size();i++)
       {
            if(s[i] == '[')
           {
               open++;
           }
           else open--;

           if(open<0)
           {
               ans++;
               open=1;
           }
       } 

       return ans;
    }
};