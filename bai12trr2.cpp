#include<bits/stdc++.h>
using namespace std;
int n; //so dinh
int s, t; //dau phat, dau thu
int c[100][100]; //do thi trong so
int fl[100][100]; //tang luong f
int stop= 0; // dieu kien dung
int valf= 0; //gia tri luong cuc dai
int vs[100], d[100], q[100], e[100], cq, dq, u, v; // cac mang dung de tim do thi tang luong


//xac dinh do thi tang luong 
void find_path()
{	
	for(u=1; u<=n;u++) vs[u]=0;
	cq=1; dq=1; q[cq]=s;
    vs[s]=1; e[s]=0; d[s]=10000;
	while(dq<=cq)
	{
		u=q[dq]; dq++;
		for(v=1;v<=n;v++)
		    if(vs[v]==0)
		    {
		    	if(c[u][v]>0&&fl[u][v]<c[u][v])
		    	{
		    		e[v]=-u;
		    		d[v]=(d[u]< c[u][v]-fl[u][v]) ? d[u]:c[u][v]-fl[u][v];
		    		cq++; q[cq]=v; vs[v]=1;
		    		if(v==t) break;
				}
			}
	}
	stop=1;
}

//tang luong f
void increase_flow()
{
	int tang = d[v];
	int v= e[v];
	int u=t;
	while(u!=0)
	{
		if(v>0) fl[v][u]+= tang;
		else
		{
			v=-v;
			fl[u][v]-=tang;
		}
		u=v; v=e[u]; tang= e[u];
	}
}


// thuat toan max_flow
void max_flow()
{
	for(int i=1;i<=n;i++) 
	    for(int j=1;j<=n;j++) 
		    fl[i][j]=0;
	stop=0;
	while(!stop)
	{
		find_path();
		//neu van tim duoc duong tang luong thi tang luong f; 
		if(stop!=0) increase_flow(); 
	}
	
}



int main()
{
    ifstream file;
	file.open("DT.INP");
	s=1;
	file>> n; t=n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) file>> c[i][j];
	max_flow();
	
	ofstream file1 ("DT.OUT");
	
	//in ra gia tri luong cuc dai
	for(int i=1;i<=n;i++) if(fl[i][n]!=0) valf+=fl[i][n];
	file1<< valf<< endl;
	
	// in ra gia tri tang luong cua fl
	for(int i=1;i<=n;i++) 
    	for(int j=1;j<=n;j++) 
        	if(fl[i][j]!=0) 
		    	file1<< "f("<< i<< ","<< j<< "): "<< fl[i][j]<< endl;
	
	file1.close();
	file.close();
}
