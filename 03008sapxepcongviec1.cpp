#include<bits/stdc++.h>
using namespace std;
struct abc{
	int date; int hour;
}a[10000];
 ;
bool cmp(abc x, abc y)
{
	return x.hour<y.hour;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		for(int i=0;i<n;i++) cin>> a[i].date;
		for(int i=0;i<n;i++) cin>> a[i].hour;
		sort(a,a+n,cmp);
		int dem=1;
		int idx=0;
	
			
			for(int i=1;i<n;i++)
			{
			
				if(a[idx].hour <= a[i].date)
				{
					dem++;
					idx=i;
				}
			}
			
	
		cout<< dem<< endl;
	}
}
