class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        
       int n = nums.size();
   int  a = k%n;  //karon  k>n hole iteration bere jabe tai k%n korle array er length er beshi hobe na
        //cout<<*nums.begin();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+a);
        reverse(nums.begin()+a, nums.end());
        
      
        //  int a =k%v.size();
        // reverse(v.begin(),v.end());
        // reverse(v.begin(),v.begin()+a);
        // reverse(v.begin()+a,v.end());
        
        
    }
};