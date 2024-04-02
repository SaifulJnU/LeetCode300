func addDigits(num int) int {
    
    if num<=9{
            return num
        }
    
    sum := 0
    for{
        for num>0{
            lastDigit := num%10
            sum += lastDigit
            num /= 10
        }
        if sum<=9{
            return sum
        }
        num = sum
        sum = 0
    }
}