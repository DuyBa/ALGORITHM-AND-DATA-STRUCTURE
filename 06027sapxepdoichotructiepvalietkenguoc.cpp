#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		
		int n,c=1;
		cin>> n;
		int a[10000]={},b[100][100]={};
		for(int i=0;i<n;i++) cin>> a[i];
		
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
    			if(a[j]<a[i]) swap(a[i],a[j]);
			
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
}
