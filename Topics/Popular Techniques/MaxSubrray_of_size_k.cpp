int findmaxsubarray(vector<int> v, int k)
{
	int maxvalue = INT_MIN;
	int currentsum = 0;
	int l = v.size();

	for (int i = 0; i < l; i++)
	{
		currentsum += v[i];
		if (i >= k - 1)
		{
			maxvalue = max(maxvalue, currentsum);
			currentsum -= v[i - k + 1];
		}
	}

	return maxvalue;
}
