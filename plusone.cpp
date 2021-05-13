class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
        for(int i = len; i >= 0; i--)
        {
            if(i == len)
            digits[i] ++;
            if(digits[i] <10)
            {
                return digits;
            }
            else
            {
                digits[i]=0;
                if(i != 0 )
                {
                    digits[i-1]++;
                }
                else
                {
                    digits.insert(digits.begin(),1 );

                }
            }
        }

        return digits;
    }
};