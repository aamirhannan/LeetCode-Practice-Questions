class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans,output;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' and s[i] <= 'Z' or s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9')
            {
                ans.push_back(s[i]);
            }
        }
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        output = ans;
        reverse(output.begin(),output.end());
        if(output == ans)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};