class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() ==1){
            return ;
        }
         int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        std::swap(s[left], s[right]);
        left++;
        right--;
    }  
    }
};