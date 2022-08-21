#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		queue <int> q; 
		int n; cin>> n;
		while(n--)
		{
			int k; cin>> k;
			if(k==1) cout<< q.size()<< endl;
			else if(k==2)
			{
				if(q.empty()) cout<< "YES";
				else cout<< "NO";
				cout<< endl;
			}
			else if(k==4) if(!q.empty()) q.pop();
			else if(k==3)
			{
				int h; cin>> h;
				q.push(h);
			}
			else if(k==4) if(!q.empty()) q.pop();
			else if(k==5)
			{
				if(!q.empty()) cout<< q.front();
				else cout<< -1;
				cout<< endl;
			}
			else if(k==6)
			{
				if(!q.empty()) cout<< q.back();
				else cout<< -1;
				cout<< endl;
				
			}
		}
	}
}
