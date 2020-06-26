
//Fibonacci Dp


typedef long long ll

ll saved[100000] = {-1};

ll fib (ll n )
{
	if (n <= 1 ) return 1;
	if (saved[n] != -1) return saved[n];
	
	return saved[n] = fib[n-2]+fib[n-1];
}

