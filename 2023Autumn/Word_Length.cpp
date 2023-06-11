#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	while(1)
	{
		cin>>s;
		cout<<(s[s.length()-1]=='.'?s.length()-1:s.length())<<endl;
	}
	return 0;
}
