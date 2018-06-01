//Problem 3. Largest Prime Factor

#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int num)
{
	for (long long int i = 2; i*i <= num; i++)
		if (num%i == 0)
			return false;
	return true;
}

int main()
{	long long int n = 600851475143;
	
	long long int temp;
	for (long long int i = 2; i <= n; i++)
	{	if (n%i == 0 && isPrime(i))
			temp = i;
	}
	
	cout << temp << "\n";
	return 0;
}
