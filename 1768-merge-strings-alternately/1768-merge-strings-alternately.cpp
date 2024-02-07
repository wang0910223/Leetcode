class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans("");

        while(!(word1.empty() && word2.empty())){
            if(!word1.empty()){
                ans.push_back(word1[0]);
                word1.erase(0, 1);
            }else{
                ans += word2;
                break;
            }

            if(!word2.empty()){
                ans.push_back(word2[0]);
                word2.erase(0, 1);
            }else{
                ans += word1;
                break;
            }
        }

        return ans;
    }
};