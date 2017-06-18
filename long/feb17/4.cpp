#include <iostream>
#include <stdio.h>
#define N 1000111
typedef int lll;
lll ar[N],ar1[N];

using namespace std;
int main(){
	lll n,q,i,tmp=1;

	scanf("%d",&n);
	scanf("%d",&q);
	ar1[0]=1;
	for (i=0;i <n;i++)
	{
		scanf("%d",&ar[i]);
		if(i==0){
			tmp++;
			continue;
		}
		else{
			if(ar[i]==ar[i-1]){
				ar1[i]=tmp++;
			}
			else{
				ar1[i]=1;
				tmp=2;
			}
		}
	}

	while(q--){
		lll l,r,k;
		scanf("%d",&l);
		scanf("%d",&r);
		scanf("%d",&k);
		l--,r--;
		if(ar1[l+k-1]==k){
			printf("%d\n",ar[l+k-1]);
			continue;
		}
		lll ans=0,pos=r,flg=0;
		for(int i=r;i>l+k-2;){
			if(ar1[i]>=k){
				ans=ar[i];
				flg++;
				break;
			}
			else{
				i-=ar1[i];
			}
		}
		if(flg==0)
			printf("-1\n");
		else
			printf("%d\n",ans);

		
	}
	return 0;
}