#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[10000]={},b[100][100]={};
	for(int i=0;i<n;i++) cin>> a[i];
	int c=1;
	for(int i=0;i<n-1;i++)
	{
		int dc=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[dc]) dc=j;
		}
		swap(a[dc],a[i]);
					for(int l=0;l<n;l++) 
			{
				b[c][l]=a[l];
			}
			c++;
	}
			for(int j=n-1;j>=1;j--)
		{
			cout<< "Buoc "<< j<< ": ";
			for(int i=0;i<n;i++) cout<< b[j][i]<<" ";
    		cout<< endl;
		}
	
}
