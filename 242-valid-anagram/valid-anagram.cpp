class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_multiset<char> seen;

        for(char sChar : s){
            seen.insert(sChar);
        }

        for(char tChar: t){
            auto it = seen.find(tChar);
            if(it == seen.end()) {
                return false;
            }

            seen.erase(it);
        }

        return true;
    }
};