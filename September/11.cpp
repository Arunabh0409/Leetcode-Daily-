//Question Link : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/?envType=daily-question&envId=2024-09-11

//TC 0(1)
//SC 0(1)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        for(int i=0;i<32;i++){
            int s= (start >> i ) & 1;
            int g= (goal >> i ) & 1; 
            if(s==g)continue;
            else ans++;
        }return ans;
    }
};