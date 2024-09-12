
//Question Link : https://leetcode.com/problems/count-the-number-of-consistent-strings/?envType=daily-question&envId=2024-09-12

//TC : O(N^2)
//SC : O(1)
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        unordered_set<char>s;
        for(auto i:allowed)s.insert(i);
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            bool flag=true;
            for(auto ch:temp){
                if(s.find(ch)==s.end()){
                    flag=false;break;
                }
            }
            if(flag)ans++;
        }
        return ans;
    }
};