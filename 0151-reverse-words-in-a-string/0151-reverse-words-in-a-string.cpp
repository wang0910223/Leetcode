class Solution {
public:
    string reverseWords(string s) {
        string ans;

        while(!s.empty()){
            int start = s.find_last_of(" ");

            if(start == s.size() - 1){
                s.pop_back();
                continue;
            }

            else{
                int count = start + 1;
                while(s[count] != '\0'){
                    ans.push_back(s[count]);
                    count++;
                }

                ans.push_back(' ');  
                if(start == -1) break;
              
                while(s.size() > start)
                    s.pop_back();
            }
            
        }
        ans.pop_back();
        return ans;
    }
};