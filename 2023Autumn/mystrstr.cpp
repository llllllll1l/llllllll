#include <bits/stdc++.h>

using namespace std;

int mystrstr(char a[],char b[])
{
	int la=strlen(a),lb=strlen(b);
	int f;
	for(int i=0;i<=la-lb;i++)
	{
		if(a[i]==b[0])
		{
			f=1;
			for(int j=0;j<lb;j++)
			{
				if(a[i+j]!=b[j])
				{
					f=0;
					break;
				}
			}
			if(f)
				return i;
		}
	}
}

int main()
{
	char a[1005],b[1005];
	cin>>a>>b;
	cout<<mystrstr(a,b);
	return 0;
}

