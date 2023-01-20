class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        int j=0;
         //array manupulation (given array er opor e calculation)
	    //prothem e number sob dukailam zror hisab bad dilam kron number chara baki sob zero 
	    //tai pore zero gula while loop calai dukai dilam
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        
        while( j<nums.size())
        {
            nums[j] = 0;
            j++;
        }
    }
};