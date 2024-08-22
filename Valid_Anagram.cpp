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

// or
class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int s2 = t.size();
        if(s1!=s2) return false;

        unordered_map<char, int> m;
        for(int i=0;i<s1;i++) m[s[i]]++;
        for(int j=0;j<s2;j++) {
            m[t[j]]--;
            if(m[t[j]]==0) m.erase(t[j]);
        }

        if(m.empty()) return true;
        return false;
    }
};
