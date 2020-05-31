 #include <bits/stdc++.h> 
    using namespace std; 
    #define int long long
    # define pii pair<int,int>
    const int maxn=1e6+5;
    int a[maxn];
    signed main() { 
        #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    	#endif
    	ios::sync_with_stdio(0);
        cin.tie(0);
        int n;
        cin>>n;
        char a[maxn];
        for(int i=0;i<=n;i++)
        {
            itoa(i,a,2);
            cout<<a<<" ";
        }
    } 
