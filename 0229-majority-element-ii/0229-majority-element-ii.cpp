class Solution
{
    public:
        vector<int> majorityElement(vector<int> &v)
        {
            /*

           	//Approach -1 :- T.C ---> O(n),  S.C --> O(n)
            unordered_map<int,int > mp;
            for(int i = 0; i < v.size(); i++)
            {
                mp[v[i]]++;
            }
            vector<int> ans;
            for(int i = 0; i < v.size(); i++)
            {
                if(mp[v[i]] > (v.size()/3))
                {
                    mp[v[i]] = 0;
                    ans.push_back(v[i]);
                }
            }

            return ans;
            */

           	//Approach - 2:- T.C --> O(n),  S.C --> O(1)

            int memb1 = 0;
            int gang1 = INT_MAX;
            int memb2 = 0;
            int gang2 = INT_MAX;

            vector<int> ans;

            for (int i = 0; i < v.size(); i++)
            {
                if (memb1 == 0 and v[i] != gang2)
                {
                    memb1++;
                    gang1 = v[i];
                }
                else if (memb2 == 0 and v[i] != gang1)
                {
                    memb2++;
                    gang2 = v[i];
                }
                else if (v[i] == gang2)
                {
                    memb2++;
                }
                else if (v[i] == gang1)
                {
                    memb1++;
                }
                else if(v[i] != gang1 and v[i] != gang2)
                {
                    memb1--;
                    memb2--;
                }
            }

            memb1 = 0;
            memb2 = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == gang1)
                {
                    memb1++;
                }
                else if (v[i] == gang2)
                {
                    memb2++;
                }
            }

            if (memb1 > (v.size() / 3))
            {
                ans.push_back(gang1);
            }
            if (memb2 > (v.size() / 3))
            {
                ans.push_back(gang2);
            }

            return ans;
        }
};