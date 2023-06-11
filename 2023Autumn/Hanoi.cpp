#include <bits/stdc++.h>

using namespace std;

void Hanoi(int n,char a,char b,char c)
{
    if (n==1)
    {
        printf("Move Disk 1 from %c to %c\n",a,c);
        return;
    }
    Hanoi(n-1,a,c,b);
    printf("Move Disk %d from %c to %c\n",n,a,c);
    hanoi(n-1,b,a,c);
}
int main()
{
    int n;
    cin>>n;
    Hanoi(n,'A','B','C');
    return 0;
}
