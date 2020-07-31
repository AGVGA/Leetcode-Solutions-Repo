/*Problem 9
Function written in C language
All given testcases passed*/

bool isPalindrome(int x)
{
    int x1, rem, result;
    long int y = 0;
    
    for(x1 = x; x1 > 0;  x1 /= 10)
    {
        rem = x1 % 10;
        y = y * 10 + rem;
    }
    
    if(x == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
