/* Problem 7
Function written in C language
All testcases passed */

int reverse(int x)
{
    int rem, y = 0;
    bool isPos = true;
    
    /* If x is negative, find the absolute value */
    if(x < 0)
    {
        if(x != INT_MIN)
        {
            x = abs(x);
            isPos = false;
        }
        /* Overflow condition */ 
        else
        {
            return 0;
        }
    }
    
    /* Extract the remainder until input is exhausted */
    for( ;x > 0;x /= 10)
    {
        rem = x % 10;
        
        /* Check for overflow */
        if(((INT_MAX / 10) < y) || 
           (((INT_MAX / 10) == y) && rem > 7))
            return 0;
        
        y = (y * 10) + rem;
    }
    
    if(isPos == false)
    {
        return -y;
    }
    else
    {
        return y;
    }
}
