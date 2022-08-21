
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		int n ; cin>> n;
		long long dem=0;
		string s;
		queue <string> q; q.push("6"); q.push("8");
		queue <string> qq; qq.push("6"); qq.push("8");
		while((qq.back()).size()<=n)
		{
			dem++;
			string top= q.front();
			qq.push(top);
	    	if((qq.back()).size()==1) qq.pop();	
			q.pop();
			q.push(top+ '6');
			q.push(top+ '8');
		}
		cout<< dem-1<< endl;
		while(qq.size()!=1)
		{
			cout<< qq.front()<< " ";
			qq.pop();
		}
		cout<< endl;
	}
}

