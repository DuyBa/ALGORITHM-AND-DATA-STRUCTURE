#include<iostream>
using namespace std;
void bk(int n, char a, char b, char c)
{
	if(n==1)
	{
		cout<< a<< " -> "<< c<< endl;
		return;
	} 
	bk(n-1,a,c,b);
	bk(1,a,b,c);
	bk(n-1,b,a,c);
}
int main()
{
	char a='A', b='B', c='C';
	int n;
	cin>> n;
	bk(n,a,b,c);
}
