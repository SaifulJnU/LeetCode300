class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0; i<flowerbed.size(); i++){
            bool prevEmpty = (i==0 || flowerbed[i-1]==0); //starting boundary check and prev place check
            bool nextEmpty = (i==flowerbed.size()-1 || flowerbed[i+1]==0);//ending boundary check and next place check
                
            //check current plot is empty before plant
                if (flowerbed[i] == 0 && prevEmpty && nextEmpty) {
                    flowerbed[i]=1;
                    count++;
                    if(count>=n){
                        return true;
                    }
                }
        }
        
        return count>=n;
    }
};