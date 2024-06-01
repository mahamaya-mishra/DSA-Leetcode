class Solution {
public:
    int scoreOfString(string s) {
        int ans =0; int diff=0;
   for(int i =1; i< s.length(); i++){
diff=abs((int)s[i]-(int)s[i-1]);
ans+=diff;
   }
   return ans;
    }
};