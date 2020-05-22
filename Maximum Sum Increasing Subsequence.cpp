    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            vector<int> arr(n);
            int ans=0;
            for(int i=0;i<n;i++)
            cin>>arr[i];
            vector<int> dp(arr.begin(),arr.end());
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        dp[i]=max(dp[i],dp[j]+arr[i]);
                    }
                }
                ans=max(ans,dp[i]);
            }
            cout<<ans<<endl;
        }
        return 0;
    }
