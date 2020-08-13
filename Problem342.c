/*! Problem 342
Function written in C language
All testcases passed */

bool isPowerOfFour(int num)
{
    /** Check if input is negative **/
    if(num <= 0)
    {
        return false;
    }
    
    /** Divide input with four until remainder 
        is zero **/
    for( ; num % 4 == 0;  )
    {
        /** Update input with it's quotient **/
        num = num / 4;
    }
    
    /** Check for quotient **/
    if(num == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
