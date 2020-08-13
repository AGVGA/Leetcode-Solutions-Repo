/*! Problem 231
Function written in C language
All testcases passed */

bool isPowerOfTwo(int n)
{ 
    /** Check if input is negative **/
    if(n <= 0)
    {
        return false;
    }
    
    /** Divide input with two until remainder 
        is zero **/
    for( ; n % 2 == 0;  )
    {
        /** Update input with it's quotient **/
        n = n / 2;
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
