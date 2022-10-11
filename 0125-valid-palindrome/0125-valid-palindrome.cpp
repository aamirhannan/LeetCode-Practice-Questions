class Solution
{
    public:
        bool isPalindrome(string s)
        {

           	//         string ans,output;
           	//         for(int i = 0; i < s.size(); i++)
           	//         {
           	//             if(iswalnum(s[i]))	//iswalnum is to check whether s[i] is alphanumeric or not
           	//             {
           	//                 ans.push_back(s[i]);
           	//             }
           	//         }

           	//         transform(ans.begin(), ans.end(), ans.begin(), ::tolower);	//to make all character lower case

           	//         output = ans;	//making a duplicate string

           	//         reverse(output.begin(),output.end());	// reversing the duplicated string

           	//         if(output == ans)	//checking if both the strings are equa; or not
           	//         {
           	//             return true;
           	//         }
           	//         else
           	//         {
           	//             return false;
           	//         }

            //This is a two pointer approach to do this in O(n), and without using extra space;
            int l = 0;
            int r = s.size() - 1;
            while(l <= r)
            {
                if (!iswalnum(s[l]))
                {
                    l++;
                    continue;
                }
                if (!iswalnum(s[r]))
                {
                    r--;
                    continue;
                }
                if (tolower(s[l]) != tolower(s[r]))
                {
                    return 0;
                }
                else
                {
                    l++;
                    r--;
                }
            }
            return 1;
        }
};