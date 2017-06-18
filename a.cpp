//find-the-minimum-distance-between-two-numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++)
            cin>>a[i];
    int x,y;
    cout<<"Enter the 2 elements ";
//    int x,y;
    cin>>x>>y;
    if(x==y)
    {int i;
        for(i=0;i<n;i++)
            if(a[i]==x)
            break;
        if(i<n)
        cout<<0;
        else cout<<"No solution ";
        return 0;
    }
  //  char c[2];
    bool flag=false;
    int ind=-1;
    int dif=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(((a[i]==x)||(a[i]==y))&&(ind==-1))
           {
               ind = i;
               if(a[i]==x)
               flag=false;
               else flag=true;
            //   cout<<i<<" "<<a[i]<<" "<<flag<<endl;
           }
        else if (((a[i]==x)||(a[i]==y))&&(ind!=-1))
        {
            if(a[i]==x)
            {cout<<1;
                if(flag==false)
                    ind = i;
                else {
                    dif = min(dif,abs(i-ind));
                    ind = i;
                    flag=true;
                }
            }
            else
            {cout<<2;
                if(flag==true)
                {
                   ind =i;
                }
                else {
                    dif = min(dif,abs(i-ind));
                    ind = i;
                    flag=false;
                }

            }

//cout<<i<<" "<<a[i]<<" "<<flag<<endl;
        }
//cout<<i<<" "<<a[i]<<" "<<flag<<endl;
  //  cout<<dif;
    }
cout<<dif;
}