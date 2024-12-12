class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0; // Counter for flowers placed
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0); // No left neighbor or left neighbor is empty
                bool emptyRight = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0); // No right neighbor or right neighbor is empty
                
                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1; // Place a flower
                    count++; // Increment the count
                    i++; // Skip the next spot to avoid adjacent placement
                }
            }
        }
        return count >= n; // Return true if enough flowers can be placed
    }
};
