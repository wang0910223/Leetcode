class Solution {
public:
    string reverseVowels(string s) {
        int ptr1 = 0, ptr2 = s.size() - 1;
        bool ptr1_found = false, ptr2_found = false;
      
        while(1){
            if(s[ptr1] == 'a' || s[ptr1] == 'e' || s[ptr1] == 'i' || s[ptr1] == 'o' || s[ptr1] =='u' || \
                s[ptr1] == 'A' || s[ptr1] == 'E' || s[ptr1] == 'I' || s[ptr1] == 'O' || s[ptr1] =='U')
                ptr1_found = true;
            else ptr1++;

            if(s[ptr2] == 'a' || s[ptr2] == 'e' || s[ptr2] == 'i' || s[ptr2] == 'o' || s[ptr2] =='u' || \
                s[ptr2] == 'A' || s[ptr2] == 'E' || s[ptr2] == 'I' || s[ptr2] == 'O' || s[ptr2] =='U')
                ptr2_found = true;
            else ptr2--;

            if(ptr1_found && ptr2_found){
                char temp = s[ptr1];
                s[ptr1] = s[ptr2];
                s[ptr2] = temp;
                ptr1++;
                ptr2--;
                ptr1_found = false; 
                ptr2_found = false;
            }

            if(ptr1 >= ptr2) break;

        }
        return s;
    }
};