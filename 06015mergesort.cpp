#include<iostream>
using namespace std;
void mss(int a[], int l, int m, int r)
{
	int *tmp; 
	int i = l; 
	int j = m + 1; 

	tmp = new int[r - l + 1];

	for (int k = 0; k <= r - l; k++)
	{
		if (a[i] < a[j]) 
		{
			
			tmp[k] = a[i]; 
			i++;
		}
		else 
		{
			tmp[k] = a[j];
			j++; 
		}		
		if (i == m + 1) 
		{

			while (j <= r)
			{
				k++;
				tmp[k] = a[j];
				j++;
			}
			break;
		}
		if (j == r + 1) 
		{
			while (i <= m)
			{
				k++;
				tmp[k] = a[i];
				i++;
			}
			break;
		}
	}
	for (int k = 0; k <= r- l; k++) 
		a[l + k] = tmp[k];
	delete tmp;
}

void ms(int a[], int l, int r)
{
	if(l<r)
	{
		int m= l+(r-l)/2;
		ms(a,l,m);
		ms(a,m+1,r);
		mss(a,l,m,r);
	}
}
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int  n;
		cin>> n;
		int a[1000000]={};
		for(int i=0;i<n;i++) cin>> a[i];
		ms(a,0,n-1);
		for(int i=0;i<n;i++) cout<< a[i]<< " ";
		cout<< endl;
	}
}
