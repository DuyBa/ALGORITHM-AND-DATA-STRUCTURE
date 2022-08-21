#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int a[10000]={};
	for(int i=0;i<n;i++) cin>> a[i];
	cout<< "Buoc 0: "<< a[0]<< endl;
	int b=1;
	for(int i=1;i<n;i++)
	{
		int k=a[i],j=i-1;
		while(j>=0&&k<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
		cout<< "Buoc "<< b<< ": ";
		for(int l=0;l<=i;l++) cout<< a[l]<< " ";
		cout<< endl;
		b++;
	}
}
