#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n, m;
		cin>> n>> m;
		int a[100000]={}, b[100000]={}, k=0;
		for(int i=0;i<n;i++) cin>> a[i];
	    b[k]=a[0];
		for(int i=0;i<m;i++) if(a[i]>b[k]) b[k]= a[i];
		k++;
		for(int i=m;i<n;i++)
		{
			if(a[i]>=b[k-1]) b[k++]=a[i];
			else
			{
				b[k]= a[i];
				for(int j=i;j>i-m;j--) if(a[j]>b[k]) b[k]=a[j];
				k++;
			} 
		}
		for(int i=0;i<n-m+1;i++) cout<< b[i]<< " ";
		cout<< endl;
    }
}
