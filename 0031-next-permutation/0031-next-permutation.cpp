class Solution
{
    public:

       	// Approach - 1  T.C --> O(N),  S.C ---> O(1);

        void nextPermutation(vector<int> &v)
        {

           	//step :-1 is to find the first dip location;
            int n = v.size() - 1;
            int prev = 0;
            int idx = 0;
            for (int i = n; i > 0; i--)	//As we are goint till i-1 in the if case, so it is necessary to run i > 0 not                                          equal otherwise it will give runtime error.
            {
                if (v[i - 1] < v[i])
                {
                    prev = i - 1;
                    idx = i;
                    break;
                }
            }

           	//Exception Handling

            if (idx == 0)
            {
                sort(v.begin(), v.end());
                return;
            }

           	// step :-2 find the next greater element
            int nextgreater = 0;
            for (int i = n; i >= 0; i--)
            {
                if (v[i] > v[prev])
                {
                    nextgreater = i;
                    break;
                }
            }

           	// step :-3 swap next greater element with the dip value

            swap(v[prev], v[nextgreater]);

           	//  step :-4 reverse the array from idx (just before dip) to n-1;
            reverse(v.begin() + idx, v.end());
        }
};