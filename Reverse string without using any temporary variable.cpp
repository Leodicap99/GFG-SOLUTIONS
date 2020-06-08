/*
Reverse string without using any temporary variable
*/
            #include <bits/stdc++.h> 
                using namespace std; 
                #define int long long
                # define pii pair<int,int>
                const int maxn=1e6+5;
                signed main() { 
                    #ifndef ONLINE_JUDGE
                    freopen("input.txt","r",stdin);
                    freopen("output.txt","w",stdout);
                    #endif
                    ios::sync_with_stdio(0);
                    cin.tie(0);
                    string s;
                    cin>>s;
                    int start=0,end=s.size()-1;
                    while(start<end)
                    {
                        s[start]^=s[end];
                        s[end]^=s[start];
                        s[start]^=s[end];
                        start++;
                        end--;
                    }
                    cout<<s;
                }
