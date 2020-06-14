int smallestsubarrayofsum(vector<int> v, int sum)
{
	int l = v.size();
	int start = 0, currentsum = 0, subarraysize = INT_MAX;
	for (int i = 0; i < l; i++)
	{
		currentsum += v[i];
		while (currentsum >= sum)
		{
			subarraysize = min(subarraysize, i - start + 1);
			currentsum -= v[start];
			start++;
		}
	}

	return subarraysize;
}
