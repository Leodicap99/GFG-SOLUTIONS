 #include <bits/stdc++.h> 
    using namespace std; 
    #define int long long
    # define pii pair<int,int>
    const int maxn=1e6+5;
    int a[maxn];
    void print(int arr[],int n)
    {
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
    void generate(int n,int arr[],int i)
    {
        if(i==n)
        {
            print(arr,n);
            return;
        }
        arr[i]=0;
        generate(n,arr,i+1);
        arr[i]=1;
        generate(n,arr,i+1);
    }
    signed main() { 
        #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    	#endif
    	ios::sync_with_stdio(0);
        cin.tie(0);
        int n;
        cin>>n;
        int arr[n];
        generate(n,arr,0);
    } 
