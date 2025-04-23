bool isPalindrome(int x) 
{
    int i,tem;
    long n=0;
    tem=x;
    if(x<0)
    return false;
    
    else
    {
        while(x!=0)
        {
        n=n*10+x%10;
        x/=10;
        }
    }
    if (n==tem)
    return true;
    return 0;
}
