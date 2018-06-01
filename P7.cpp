#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int i)
{	for (long long int j = 2; j*j <= i; j++)
		if (i%j == 0)
			return false;
	return true;
}

int main()
{	int n = 10001;
	int count = 0;
	long long int iter = 2, ans;
	while (count < n)
	{	if (isPrime(iter))
		{	count++;
		}
		if (count == n)
			break;
		iter++;
	}
	
	cout << iter << "\n";
	return 0;
}
	
