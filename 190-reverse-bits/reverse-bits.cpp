class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        for(int i=0; i<32; i++){
            int l = (n%2);
            a= (a<<1);
            n= n>>1;
            a= a | l;
        }
        return a;
    }
};