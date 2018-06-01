//Problem 1. Multiples of 3 and 5

#include <bits/stdc++.h>
using namespace std;

int n = 999;

int solve(int num)
{	int count = 0;
	int len = n/num;
	return num*((len*(len+1))/2);
}

int main()
{	long long int ans = 0;
	
	ans = solve(3) + solve(5) - solve(15);

	cout << ans << "\n";
	return 0;
}
