#include<bits/stdc++.h>
#define N 100011
#define endl "\n"
typedef long long ll;
using namespace std;
ll ar[N];


int main(){
	std::ios::sync_with_stdio(false);
	ll n,k,nm,l;
	cin>>n>>k;
	memset(ar, 0, n*sizeof(ar[0]));
	
	for(ll i=0;i<k;i++){
		cin>>nm;
		for(ll j=0;j<nm;j++){
			cin>>l;
			ar[l]=i;
		}
	}
	ll q,fir,sec;
	cin>>q;
	for(ll i=0;i<q;i++){
		cin>>fir>>sec;
		
		  cout<<min(abs(ar[fir]-ar[sec]),n-abs(ar[fir]-ar[sec]))<<endl;
		
	}
	return 0;
}