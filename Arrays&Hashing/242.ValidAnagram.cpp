class Solution {

// anagram - a word or phrase formed by rearranging the letters of another word
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        // O(m + n) time | O(1) space
        // where m and n are the sizes of string s and t
        int freqChars[26];

        // O(m) time - where m is the length of s
        for(int i = 0; i < s.length(); ++i) {
            freqChars[s[i] - 'a']++;
        }

        // O(n) time - where n is the length of t
        for(int i = 0; i < t.length(); ++i) {
            if(freqChars[t[i] - 'a'] > 0) freqChars[t[i] - 'a']--;
            else return false;
        }
        return true;


        // // base case - check the size of s and t
        // // if the size is not equal - return false
        // if(s.length() != t.length()) return false;

        // // O(n log n) + O(m log m) - where n and m are the sizes of string s and t
        // // naive - sort the strings and compare them
        // // if they are equal - return true else return false
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t) return true;
        // return false;

    }
};