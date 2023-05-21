#include <bits/stdc++.h>
using namespace std;
long long modpower(long long x, long long n, long long m)
{
    if (n == 0) //base case
        return 1%m;
    long long u = modpower(x,n/2,m); 
    u = (u*u)%m;
    if (n%2 == 1) //when 'n' is odd
        u = (u*x)%m;
    return u;
}
int main()
{
	cout << modpower(2,5,31);
}
