class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev, next;
        int count = 0;
        for(int i = 0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                prev = (i == 0 || flowerbed[i-1] == 0) ? 0 : 1;
                next = (i == flowerbed.size()-1 || flowerbed[i+1] == 0) ? 0 : 1;
                if(prev == 0 && next == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
            if(count>=n) return true;
        }
        return false;
    }
};