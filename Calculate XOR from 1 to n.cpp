/*
Given a number n, the task is to find the XOR from 1 to n. 
*/
             
             #include <bits/stdc++.h> 
                using namespace std; 
                #define int long long
                # define pii pair<int,int>
                const int maxn=1e6+5;
                int computexor(int n)
                {
                    switch(n&3)
                    {
                        case 0:return n;
                        case 1:return 1;
                        case 2:return n+1;
                        case 3:return 0;
                    }
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
                    cout<<computexor(n);                   
                }
