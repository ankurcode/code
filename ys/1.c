#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[10000];
	scanf(" %[^\t\n]s",a);
	int i=0,cnt=0,j=0,flag=0,m1=10,m2=1,fg=0;
	float b[10000];
	while(a[i]!='\0'){
		float temp=0;
		int flag=1,m1=10,m2=1,fg=0;
		while(a[i]!=' ' && a[i]!='\0'){
			if(a[i]=='-'){
				flag=-1;i++;
				continue;
			}
			else{
				if(a[i]=='.'){
					m1=1,m2=10;
					i++;fg=1;
				}
				
				//printf("%f ",temp);
				temp=(float)temp*m1 + (float)(a[i++]-'0')/(float)m2;
				if(fg==1) m2*=10;
			}
			
		
		
		}
		if(a[i]==' ')
			i++;
		b[j++]=temp*flag;
	}
	for(int a=0;a<j;a++){
		printf("%f\n", b[a]);
	}
}
