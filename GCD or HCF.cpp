int calcGCD(int n, int m)
{
    // Write your code here.
    // O(min(n,m))
    /*for(int i=min(n,m);i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
            return i;
        }
    }*/

    // Euclidean Algo
    // O(log min(n,m))
    while (n > 0 && m > 0)
    {
        if (n > m)
        {
            n = n % m;
        }
        else
        {
            m = m % n;
        }
    }
    if (n == 0)
        return m;
    return n;
}