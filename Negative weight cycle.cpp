/*
The Basic algorithm is to first fix the best smallest distance for all the edges v-1 time and then dry run through the nodes again
If it has a smaller distance to any of the nodes that means that there is a negative cycle.
*/
#include<bits/stdc++.h>
using namespace std;
#define INF 1000000
struct graph
{
  int x,y,weight;  
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int v,e;
	    cin>>v>>e;
	    graph g[e];
	    for(int i=0;i<e;i++)
	    {
	        int a,b,c;
	        cin>>a>>b>>c;
	        g[i].x=a,g[i].y=b,g[i].weight=c;
	    }
	    vector<int> dist(v,INF);
	    dist[0]=0;
	    for(int i=0;i<v-1;i++)
	    {
	        for(int j=0;j<e;j++)
	        {
	            if(dist[g[j].x]+g[j].weight<dist[g[j].y])
	            {
	                dist[g[j].y]=dist[g[j].x]+g[j].weight;
	            }
	        }
	    }
	    bool flag=false;
	    
	        for(int j=0;j<e;j++)
	        {
	            if(dist[g[j].x]+g[j].weight<dist[g[j].y])
	            {
	                flag=true;
	            }
	        }
	    
	    if(flag)cout<<1<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}