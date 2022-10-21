class Solution
{
    public:
        bool checkIfExist(vector<int> &arr)
        {
            
            // Approach -1 ===> this soln has T.C----> O(n^2) and S.c----> O(1)
            
            /*for(int i = 0; i < arr.size(); i++)
            {
                for(int j = 0; j < arr.size(); j++)
                {
                    if(i == j)
                    {
                        continue;
                    }
                    else if((2*arr[j]) == arr[i])
                    {
                        return true;
                    }
                }
            }
            return false;
            */
            
            
            /*// Approach - 2 ====>   this soln has O(n) T.C and O(n) S.C
            
            unordered_map<double, int> mp;
            for (int i = 0; i < arr.size(); i++)
            {
                if (mp.count((double) arr[i] *2) or mp.count((double) arr[i] / 2))
                {
                    return true;
                }
                mp[arr[i]]++;
            }
            return false;
            */
            
            
            // Approach-3 ====> this soln will have T.C ----> nlogn and S.C ---> O(1).
            //using inbuilt binary_search() function.
            
            sort(arr.begin(),arr.end());
            for(int i = 0; i < arr.size(); i++)
            {
                if(binary_search(arr.begin()+i+1,arr.end(),2*arr[i]) or (binary_search(arr.begin()+i+1,arr.end(),arr[i]/2.0)) )
                {
                    return true;
                }
            }
            return false;
            
            
        }
};