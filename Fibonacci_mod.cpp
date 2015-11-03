int fib_n(int n)
{
	vector<int> dp(n + 1);
	dp[1] = 1; dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
		//rez= ((dp[i - 1] % 10) + dp[i - 2] % 10)% 10;
		dp[i] %= 10;
	}
	return dp[n];
}
