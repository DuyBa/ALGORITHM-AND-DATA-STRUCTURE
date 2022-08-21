
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t; cin>> t; cin.ignore(); while(t--)
	{
		int n ; cin>> n;
		string s;
		queue <string> q; q.push("6"); q.push("8");
		stack <string> qq; qq.push("6"); qq.push("8");
		while((qq.top()).size()<=n)
		{
			string top= q.front();
			qq.push(top);
	    	if((qq.top()).size()==1) qq.pop();	
			q.pop();
			q.push(top+ '6');
			q.push(top+ '8');
		}
		qq.pop();
		cout<< qq.size()<< endl;
		while(!qq.empty())
		{
			cout<< qq.top()<< " ";
			qq.pop();
		}
		cout<< endl;
	}
}

