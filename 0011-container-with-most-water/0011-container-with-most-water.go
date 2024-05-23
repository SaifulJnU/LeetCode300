
func min(a, b int) int{
    if(a<b){
        return a
    }else {
        return b
    }
}

func max(a, b int) int{
    if(a>b){
        return a
    }else {
        return b
    }
}

func maxArea(height []int) int {
    var maxArea int = 0
    var l int = 0
    var r int = len(height)-1
    
    for l<r {
        maxArea = max(maxArea, min(height[r], height[l]) * (r-l))
        
        if height[l] < height[r]{
            l++
        }else{
            r--
        }
    }
    return maxArea
}