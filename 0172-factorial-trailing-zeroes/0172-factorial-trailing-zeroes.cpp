class Solution {
public:
    int trailingZeroes(int n) {
   // zero can be formed by combination of (5,2) count the number of 5 in given n! basically do n/5
   //      will give the number of 5 but there is a catch 25 has (5,5) that means we have to calculate
   //      it one more time for that just divide the n in multiple of 5(5,25,125,625,3125) 
   //      for 2,3,4 digits number
        
       return n/5+n/25+n/125+n/625+n/3125;  //O(1) solution
        
        
// O(n^2) solution       
//         int cnt=0;
        
//         for(int i=5; i<=n; i+=5)
//         {
//             int x=i;
            
//             while(x%5==0)
//             {
//                 x/=5;
//                 cnt++;

//             }
//         }
        
//         return cnt;
         
    }
};