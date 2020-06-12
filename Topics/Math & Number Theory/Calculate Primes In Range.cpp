vector<bool> PrimesinRange(long long n)
{
	vector<bool> isPrime(n + 1, true);	
	isPrime[0] = isPrime[1] = 0;		
 
	for (long long i = 2; i*i <= n; ++i) 
	{
		if (isPrime[i]) 
		{
 
			for (int j = i * 2; j <= n; j += i)
				isPrime[j] = 0;
		}
	}
 
	return isPrime;
}


int main()
{
	vector<bool> v = PrimesinRange(long long n);
}