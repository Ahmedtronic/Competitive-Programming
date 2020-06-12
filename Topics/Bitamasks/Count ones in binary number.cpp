// calculate number of ones or zeros in a numeber

int countSetBits( int n)
{
	int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

int main()
{
	int i = countSetBits(5);
}