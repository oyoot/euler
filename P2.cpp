//Problem 2. Even Fibonacci Numbers

#include <bits/stdc++.h>
using namespace std;

long long int num = 4000000;

int main()
{	long long int l = 2, m = 8, temp;
	long long int ans = 2;
	while (m <= num)
	{	temp = (4*m + l);
		ans += m;
		l = m;
		m = temp;
	}
	
	cout << ans << "\n";
	return 0;
}	
