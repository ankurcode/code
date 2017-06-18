#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		ll n,m,u,v;
		ll a[200]={0};
		cin>>n>>m;
		bool fg=false;
		for(ll i=0;i<m;i++){
			cin>>u>>v;
			a[u]++,a[v]++;
			if(a[u]!=a[v]){
				fg=true;
			}

		}

		if(fg==true || (n-m*2)%2==1){
			printf("no\n");
		}
		else
			printf("yes\n");
	}
}
