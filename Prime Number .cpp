#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool flag=true;
	    for(int i=2;(long long)i*i<=n;i++)
	    {
	        if(n%i==0)
	        {
	            flag=false;
	            break;
	        }
	    }
	    if(flag)cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
