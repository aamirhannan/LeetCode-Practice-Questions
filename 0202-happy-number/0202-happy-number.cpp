class Solution {
public:
    
    int nextelement(int n)
    {
        int sum = 0;
        while(n != 0)
        {
            int x = n % 10;
            sum += x*x;
            n = n / 10;
        }
        
        return sum;
    }
    
    bool isHappy(int n) 
    {
        set<int> st;
        while(true)
        {
            if(n == 1)
            {
                return true;
            }
            
            st.insert(n);
            n = nextelement(n);
            if(st.find(n) != st.end())
            {
                return false;   
            }
            st.insert(n);
        }
        
    }
};