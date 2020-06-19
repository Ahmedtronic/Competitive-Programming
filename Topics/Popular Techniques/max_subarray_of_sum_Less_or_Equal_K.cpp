int n, t, arr[100001];

int max_subarray_of_sum_Less_or_Equal_K()
{
	int l = 0, r = 0, mx = 0, sum = 0;
	cin >> n >> t;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	while (l < n)
	{
		while (r < n && sum + arr[r] <= t)
		{
			sum += arr[r];
			r++;
		}
		mx = max(mx, r - l);
		sum -= arr[l];
		l++;
	}
	return mx;
}
