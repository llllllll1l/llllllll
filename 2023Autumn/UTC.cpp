#include <bits/stdc++.h>

using namespace std;

int UTC(int t)
{
	return (t/100-8+ ((t/100-8<0)?24:0)) *100+t%100;
}

int main()
{
	int t;
	cin>>t;
	cout<<UTC(t);
	return 0;
}
