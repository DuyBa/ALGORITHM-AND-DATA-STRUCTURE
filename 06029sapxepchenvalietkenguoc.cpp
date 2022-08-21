#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[10000]={}, b[100][100]={};
	for(int i=0;i<n;i++) cin>> a[i];
	int c=1;
	b[0][0]=a[0];
	for(int i=1;i<n;i++)
	{
		int k=a[i],j=i-1;
		while(j>=0&&k<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
		for(int l=0;l<=i;l++) b[c][l]=a[l];
		c++;
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<< "Buoc "<< i<< ": ";
		for(int j=0;j<=i;j++) cout<< b[i][j]<< " ";
		cout<< endl;
	}
}
