class Solution {
public:
    int calPoints(vector<string>& v) {
        vector<int>t;
        int s=0;
        for(int i=0;i<v.size();i++){
            int n=t.size();
            if(v[i]=="D")
                t.push_back(t[n-1]*2);
            else if(v[i]=="+")
                t.push_back(t[n-1]+t[n-2]);
            else if(v[i]=="C")
                t.pop_back();
            else
                t.push_back(stoi(v[i]));
        }
        for(auto i:t)
            s+=i;
        return s;
    }
};