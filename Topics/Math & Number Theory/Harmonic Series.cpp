for (int i = 1; i <= n; i++)
		{
			for (int j = i * 2; j <= n; j += i)
				if (a[i] < a[j])
					dp[j] = max(dp[j], dp[i] + 1), counter++;
			if (i == 1) cout << counter << endl;
		}
		
//  Harmonic Series
// Complexity O(log n) ... can be used with n to create n*log(n) problems .... 
