//Concept: Hashing

// Question : 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        for(int i=0;i<t.length();i++)
        {
            m[t[i]]--;
        }
        for(auto x : m)
        {
            if(x.second != 0)
                return false;
        }
        return true;
    }
};
