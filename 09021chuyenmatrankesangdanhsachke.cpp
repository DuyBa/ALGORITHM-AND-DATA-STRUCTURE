#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector <int> List[1005];
int main()
{
	int n; cin>> n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++)
	{
		cin>> a[i][j];
		if(a[i][j]==1) List[i].push_back(j);
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=0; j<List[i].size();j++) cout<< List[i][j]<< " ";
		cout<< endl;
	}
}
