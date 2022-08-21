#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[10000]={};
	for(int i=0;i<n;i++) cin>> a[i];
	int b=1;
	for(int i=0;i<n-1;i++)
	{
		int dc=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[dc]) dc=j;
		}
		swap(a[dc],a[i]);
		cout<< "Buoc "<< b<< ": ";
		for(int l=0;l<n;l++) cout<< a[l]<< " ";
		cout<< endl;
		b++;
	}
	
}
