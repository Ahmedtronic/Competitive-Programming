const int maxn = 100001;
int n, a[maxn], cnt[maxn], x;

void MaxSubarraynotDivisible()
		cin >> n >> x;
		int sum = 0;
		memset(cnt, 0, sizeof(cnt));
		for (int i = 1; i <= n; i++) 
		{
			cin >> a[i];
			cnt[a[i] % x]++; sum += a[i] % x;
		}
		
		if (cnt[0] == n) { cout << -1 << endl; continue; } //only case where all of them are divisible by x
		else if (sum%x != 0) { cout << n << endl; continue; } 
 
		int left = 1, right = n;
 
		for (; left <= n; left++) 
		{
			if (a[left] % x != 0) break;
		}
		
		for (; right >= 1; right--) 
		{
			if (a[right] % x != 0) break;
		}
 
		cout << max(n - left, right - 1) << endl;
 
	}
}