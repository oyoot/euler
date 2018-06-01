//Problem 5. Smallest Multiple

#include <bits/stdc++.h>
using namespace std;

int n = 20;

int count(int i)
{	int c = 0;
	int temp = i;
	while (temp <= n)
	{	c++;
		temp *= i;
	}
	return c;
}

bool isPrime(int i)
{	for (int j = 2; j*j <= i; j++)
		if (i%j == 0)
			return false;
	return true;
}

int main()
{	
	long long int ans = 1;
	for (int i=2; i<= 20; i++)
	{	if (isPrime(i))
		{	ans *= pow(i,count(i));
		}
	}
	cout << ans << "\n";
	return 0;
}
