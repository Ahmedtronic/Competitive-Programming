long long fast_power(long long base, long long power) 
{
    long long result = 1;
    while(power > 0) 
	{
 
        if(power & 1) { result = (result*base) % MOD; }
        base = (base * base) % MOD;
        power >>= 1; 
    }
    return result;
}