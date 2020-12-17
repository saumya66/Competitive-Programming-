int check(long long int mid, vector<int> C)
{
	int count = 1;
	long long int sum = 0;
	for (int i = 0; i < C.size(); i++)
	{
		if (sum + C[i] > mid)
		{
			sum = C[i];
			count++;
			if (C[i] > mid)
			{
				return INT_MAX;
			}
		}
		else
		{
			sum += C[i];
		}
	}
	return count;
}
int Solution::paint(int A, int B, vector<int> &C) {
	long long int low = LONG_MAX;
	long long int high = 0;
	for (int i = 0; i < C.size(); i++)
	{
		low = min(low, (long long)C[i]);
		high += C[i];
	}
	long long int ans;
	long long int mid;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (check(mid, C) <= A)
		{
			ans = mid;
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (ans * B) % 10000003;
}