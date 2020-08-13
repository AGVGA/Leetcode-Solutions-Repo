/*! Problem 326
Function written in C language
All testcases passed */

bool isPowerOfThree(int n)
{     
    /** Check if input is negative **/
    if(n <= 0)
    {
        return false;
    }
    
    /** Divide input with three until remainder is zero **/
    for( ; n % 3 == 0;  )
    {
        /** Update input with it's quotient **/
        n = n / 3;
    }
    
    /** Check for quotient **/
    if(n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
