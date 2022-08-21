#include<bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n)
{
	for(int i=0;i<n;i++) cin>> a[i];
}

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m, p;
		cin>> n>> m>> p;
		long long a[100000]={}, b[100000]={}, c[100000]={};
		nhap(a,n);
		nhap(b,m);
		nhap(c,p);
		int ck=-1;
		int i=0,j=0,k=0;
		while(i<n&&j<m&&k<p)
		{
			if(a[i]==b[j]&&b[j]==c[k])
			{
				cout<< a[i]<< " ";
				ck=0;
				i++;k++;j++;
			}
			else if(a[i]<b[j]) i++;
			else if(b[j]<c[k]) j++;
			else k++;
		}
		if(ck==-1) cout<< "NO";
		cout<< endl;
 	}
}
