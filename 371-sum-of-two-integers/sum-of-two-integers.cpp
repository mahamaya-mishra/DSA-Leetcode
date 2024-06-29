class Solution {
public:
 string inString(int n) {
    if (n == 0) return "0";

    string b = "";
    while (n > 0) {
        b = (n % 2 == 0 ? "0" : "1") + b;
        n = n / 2;
    }
    return b;
}
    int getSum(int a, int b) {
        while(b!=0){
            int carry=(a&b)<<1;
            a=a^b;
            b=carry;
        }
        return a;
    }
};