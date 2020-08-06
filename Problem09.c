/*Problem 9
Function written in C language
All testcases passed*/

bool isPalindrome(int x)
{
    int x1, rem, result;
    long int y = 0;
    
    /* Converting given number into it's reverse number */
    for(x1 = x; x1 > 0;  x1 /= 10)
    {
        rem = x1 % 10;
        y = y * 10 + rem;
    }
    
    /* Checking if the given number and it's reverse number
       are the same or not */
    if(x == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
