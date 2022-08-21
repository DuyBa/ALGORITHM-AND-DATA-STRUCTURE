#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n; cin>> n;
		int a[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int dem=0;
		while(n>0)
		{
			int idx=9;
			while(idx>=0)
			{
				if(n>=a[idx])
				{
					dem++;
					n-=a[idx];
					break;
				}
				idx--;
			}
		}
		cout<< dem<< endl;
	}
}
