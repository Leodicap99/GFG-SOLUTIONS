#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x,sum=0,ans=0;
	    cin>>n>>k;
	    unordered_map<int,int> map;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        sum+=x;
	        if(sum==k)ans=i+1;
	        if(map.count(sum)==0)
	        map[sum]=i;
	        if(map.count(sum-k))
	        ans=max(ans,i-map[sum-k]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
