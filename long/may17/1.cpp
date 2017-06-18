#include<bits/stdc++.h>
//#define endl "\n"
typedef long long ll;
using namespace std;
string str;
int main(){
	std::ios::sync_with_stdio(false);
	ll t;
	cin>>t;
	while(t--){
		cin>>str;
		ll len=str.length();
		char a=str[0];
		ll flg=0;
		for(ll i=1;i<len;i++){
			if(a==str[i]) continue;
			else if(a=='C'){
				if(str[i]=='E'||str[i]=='S'){
					a=str[i];
					continue;

				}
			}
			else if(a=='E'){
				if(str[i]=='S'){
					a=str[i];
					continue;
				}
				else{
					flg++;
					break;
				}
			}
			else{
				flg++;
					break;
			}
		}
		if(flg==0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}