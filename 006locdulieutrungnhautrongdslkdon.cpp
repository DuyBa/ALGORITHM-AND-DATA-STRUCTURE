#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>> n;
	int a[n]={}; for(int i=0;i<n;i++) cin>> a[i];
	vector<int> b;
	for(int i=0;i<n;i++)
	{
		int ck=0;
		for(int j=0;j<b.size();j++)
		{
			if(a[i]==b[j])
			{
				ck=1;
				break;
			}
		}
		if(ck==0) b.push_back(a[i]);
	}
	for(int i=0;i<b.size();i++) cout<< b[i]<< " ";
}
