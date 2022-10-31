class Solution
{
    public:
        int maxProduct(vector<int> &v) 
        {
            int max = INT_MIN;
            for(int i = 0; i < v.size(); i++)
            {
                for(int j = i+1; j < v.size(); j++)
                {
                    if((v[i]-1)*(v[j]-1) > max)
                    {
                        max = (v[i]-1)*(v[j]-1);
                    }
                }
            }
            
            return max;
        }
};