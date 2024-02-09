class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);

        int ptr1 = 0, ptr2 = 1, ptr3 = 2;

        while(ptr1 <= flowerbed.size() - 3 && n > 0){
            if(flowerbed[ptr1] == 0 && flowerbed[ptr2] == 0 && flowerbed[ptr3] == 0){
                flowerbed[ptr2] = 1;
                n--;
                ptr1 += 2;
                ptr2 = ptr1 + 1;
                ptr3 = ptr2 + 1;
            }
            else{
                ptr1 += 1;
                ptr2 = ptr1 + 1;
                ptr3 = ptr2 + 1;
            }
        }

        if(n == 0) return true;
        else return false;
        
    }
};