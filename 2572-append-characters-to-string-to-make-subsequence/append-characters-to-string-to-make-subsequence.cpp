class Solution {
public:
    int appendCharacters(string s, string t) {
      int s_len = s.length();
    int t_len = t.length();
    
    // Pointer to traverse string t
    int t_ptr = 0;

    // Traverse string s to find characters of t
    for (int i = 0; i < s_len && t_ptr < t_len; ++i) {
        if (s[i] == t[t_ptr]) {
            t_ptr++;
        }
    }

    // The number of characters that need to be appended
    return t_len - t_ptr;  
    }
};