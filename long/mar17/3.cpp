#include<bits/stdc++.h>
using namespace std;
    int  main()
    {
    	int t,i,j,k,m,c=0;
    	scanf("%d",&t);
    	while(t>0)
    	{
    		int n,count=0;
     
    		scanf("%d",&n);
    		int a[n][n];
    		m=n-1;
    for(i = 0 ; i < n ; i++)
    {
      for(j = 0 ; j < n ; j++)
      {
        scanf("%d", &a[i][j]) ;
        if(a[i][j]==0)
        {
        	count=count+1;
        }
    }
    }
     
    if(count==0)
    {
    	printf("%d\n",m);
     
    }
    else
    {
    	for(k=1;k<=n;k++)
    	{
    		if(count>=2*k)
    		{
    			m=m-1;
    			count=count-2*k;
     
    		}
     
     
    		else
    		{
    			printf("%d\n",m);
    			c=1;
    			break;
    		}
     
    	}
    	if(c==0)
    	{
     
    		printf("%d\n",m);
    	}
    }
    t=t-1;
     
    }
    return(0);
    }