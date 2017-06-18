#include <bits/stdc++.h>
#define N 1000011
typedef long long ll;
ll ar[N],ar1[N];
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,i;
		cin>>a>>b;
		ll nm=a*b,zr=0,on=0;
		//ll ar[nm],ar1[nm*2];
		//memset(ar,0,sizeof(ar));
		for(i=0;i<nm;i++)
		{
			cin>>ar[i];
			if(ar[i]==0)zr++;
			else on++;
		}
		ll m=2,k=0;
		while(m--){
			for(i=0;i<nm;i++,k++){
				if(k==0){
					ar1[k]=ar[0];
				}
				else{
					ar1[k]=ar1[k-1]+ar[i];
				}
			}
		}
		if(on>zr){
			cout<<1<<endl;
			continue;
		}
		else{
			ll flg=0;
			for(i=0;i<b;i++){
				ll k=0,j=0,sum=0,cnt=0;
				for(ll k=0,j=i;k<a;k++,j=j+b){
					if(j==0){
						sum=ar1[j+b-1];
					}
					else{
						sum=ar1[j+b-1]-ar1[j-1];
					}
					if(sum>b/2){
						cnt++;
					}


				}
				if(cnt>a/2){
					flg++;
					break;
				}
			}
			if(flg>0)cout<<1<<endl;
				else cout<<0<<endl;	
		}
	}
	
	return 0;
}

