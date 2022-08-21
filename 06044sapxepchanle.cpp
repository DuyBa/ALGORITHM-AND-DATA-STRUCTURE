#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[100000]={},b[100000]={}, c[100000]={};
	int n1=0, n2=0;
	for(int i=0;i<n;i++)
	{
		cin>> a[i];
		if((i+1)%2!=0) b[n1++]=a[i];
		else c[n2++]=a[i];
	}
	sort(b,b+n1);
	sort(c,c+n2);
	n2--;
	for(int i=0;i<n/2;i++)
	{
		cout<< b[i]<< " "<< c[n2--]<< " ";
	}
	if((n/2)*2!=n) cout<< b[n/2]<< endl;
}
