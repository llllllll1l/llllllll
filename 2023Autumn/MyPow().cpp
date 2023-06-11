#include <bits/stdc++.h>

using namespace std;

int pow(int x,int n)
{
	return n==0?1:pow(x,n-1)*x;
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<pow(x,n);
	return 0;
}
