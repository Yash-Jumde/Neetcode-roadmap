// Concept : Two Pointers

// Question : 125. Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                i++;
            else if(s[i]>='A' && s[i]<='Z')
            {
                s[i] += 32;
                i++;
            }
            else{
                s.erase(s.begin()+i);
            }
        }

        if(s.empty())
            return true;
        
        int right = s.length()-1;
        for(int left = 0;left <= right; left++, right--)
        {
            if(s[left]!=s[right])
                return false;
        }
        return true;

    }
};
