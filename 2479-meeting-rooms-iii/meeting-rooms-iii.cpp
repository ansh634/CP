class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& m) {
        sort(m.begin(),m.end());

        vector<pair<long long,int>> v(n);

        for(int i=0;i<v.size();i++)
        {
            v[i]={0,0};
        }
        
        long long w,s;
        int dur,j;
        bool f=false;
       
        for(int i=0;i<m.size();i++)
        {
            w=LLONG_MAX;
            s=m[i][0];
            dur=(m[i][1]-s);
            j=0;
            f=false;
            
            for(int i=0;i<n;i++)
            {
                if(v[i].first<=s)
                {
                    v[i].first=s+dur;
                    v[i].second++;
                    f=true;
                    break;
                }
                if(w>v[i].first)
                {
                    w=v[i].first;
                    j=i;
                }
            }

            if(!f)
            {
                w=LLONG_MAX;
                v[j].first+=dur;
                v[j].second++;
            }
        }
        int k=0;
        j=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i].second>k)
            {
                k=v[i].second;
                j=i;
            }
            else if(v[i].second==k)
            {
                j=min(j,i);
            }
        }
        return j;
    }
};