#include<bits/stdc++.h>
using namespace std;
int maxSumLCM(int n)
{
	int max_sum = 0; // Initialize result

	// Finding a divisor of n and adding
	// it to max_sum
	for (int i=1; i*i<=n; i++)
	{
		if (n%i == 0)
		{
			max_sum += i;
			if (n/i != i)
				max_sum += (n/i);
		}
	}

	return max_sum;
}

// Driver code
int main()
{
	int n ;
    cin>>n;
	cout << maxSumLCM(n) << endl;
	return 0;
}
