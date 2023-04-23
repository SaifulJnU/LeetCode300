class Solution {
public:
    
    
    int maxArea(vector<int>& height) {
       
        int maxi = INT_MIN;
        int i=0;
        int j=height.size()-1;
        
        while(i<=j)
        {
            int w=0,h=0;
            
            w = abs(i-j);
            h = min(height[i],height[j]);
            
            maxi = max(maxi, w*h);
            
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        
        return maxi;
    }
};