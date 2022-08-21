#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[10000]={}, b=1;
	for(int i=0;i<n;i++) cin>> a[i];
	for(int i=0;i<n;i++)
	{
		int ck=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				ck=1;
				swap(a[j],a[j+1]);
			}
		}
		if(ck==0) break;
		else 
		{
			cout<< "Buoc "<< b<< ": ";
			for(int l=0;l<n;l++) cout<< a[l]<< " ";
			cout<< endl;
			b++;
		}
	}
}
