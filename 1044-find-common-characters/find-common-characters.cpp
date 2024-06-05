class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         vector<int> minFreq(26, INT_MAX);
    
    // Iterate over each word in the array.
    for (const string& word : words) {
        // Initialize a frequency array for the current word.
        vector<int> freq(26, 0);
        
        // Count the frequency of each character in the current word.
        for (char c : word) {
            freq[c - 'a']++;
        }
        
        // Update the global minimum frequency array.
        for (int i = 0; i < 26; ++i) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    
    // Collect the characters based on their minimum frequency.
    vector<string> result;
    for (int i = 0; i < 26; ++i) {
        while (minFreq[i] > 0) {
            result.push_back(string(1, i + 'a'));
            minFreq[i]--;
        }
    }
    
    return result;
    }
};