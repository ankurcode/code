#include<bits/stdc++.h>
using namespace std;
int a[100];
int des;
 int R;
 int x[100];
 void sub(int s,int r,int k)
{
    x[k]=1;
    if(s+a[k]==des)
    {
        for(int i=0;i<=k;i++)
            if(x[i])
            cout<<a[i]<<" ";
cout<<"\n";
 
    }

    else if((a[k+1]<=des-(s+a[k]))&&((r-(a[k]))>=des-a[k]-s))

     if((a[k+1]<=(des-s))&&((r-a[k])>=des-s))
        {x[k]=0;
            sub(s,r-a[k],k+1);
        }
 
}
int main()
{
    int n;
     cout<<"Enter the number of elements ";
     cin>>n;
 
 
     cout<<"Enter the elements ";
     for(int i=0;i<n;i++)
        {
            cin>>a[i];
               R+=a[i];
        }
        sort(a,a+n);
            printf("Enter the desired sum ")
        ;
        cin>>des;
        sub(0,R,0);
        //if
    return 0;
}
