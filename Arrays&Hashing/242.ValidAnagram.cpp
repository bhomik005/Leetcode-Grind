#include <string>

class Solution {
public:
    // O(s + t) time - where s and t are string lengths
    // O(1) space
    bool isAnagram(std::string s, std::string t) {

        // not having same length
        if(s.length() != t.length()) return false;

        // count the frequency of elements in string s
        int count[26];
        for(int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
        }

        // then check the frequency of elements in string t with string s
        for(int i = 0; i < t.length(); ++i) {
            if(count[t[i] - 'a'] >= 1) count[t[i] - 'a']--;
            else return false;
        }

        return true;
    }
};