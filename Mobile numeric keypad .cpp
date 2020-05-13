The way to solve this question is to use dynamic programming.
The Possible ways to solve this question is to move left right up down and the current button itself.
#include <bits/stdc++.h>
using namespace std;
long countnumbers(int n)
{
    vector<long> curr(10,0),prev(10,1);
    if(n==1)return 10;                //For 1 we initialize it with 10 only and return it
    while(--n)                        // note that we are taking from n to 1 beacuse we have already filled the array with 1
    {
        curr[0]=prev[8]+prev[0];
        curr[1]=prev[2]+prev[4]+prev[1];
        curr[2]=prev[1]+prev[3]+prev[5]+prev[2];
        curr[3]=prev[2]+prev[6]+prev[3];
        curr[4]=prev[1]+prev[7]+prev[5]+prev[4];
        curr[5]=prev[2]+prev[8]+prev[4]+prev[6]+prev[5];
        curr[6]=prev[3]+prev[9]+prev[5]+prev[6];
        curr[7]=prev[8]+prev[4]+prev[7];
        curr[8]=prev[5]+prev[0]+prev[7]+prev[9]+prev[8];
        curr[9]=prev[6]+prev[8]+prev[9];
        for(int i=0;i<10;i++)prev[i]=curr[i];           //After every iteration we will store the prvious value which can be used later on.
    }
    long sum=0;
    for(int i=0;i<10;i++)sum+=curr[i];
    return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<countnumbers(n)<<endl;
	}
	return 0;
}