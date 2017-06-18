import math
n,l,r=map(int,input().split())
ar=list(map(int,input().split()))
ar1=[]
ar.sort()
for i in range(n-1,0,-1):
  b=ar[i]+ar[i-1]
  a=abs(ar[i]-ar[i-1])
  ar1.append((a,b))

ar1.sort()
ar2=[]
ar2.append((ar1[0][0],ar1[0][1]))
for i in range(1,n-1):
  tmp1=ar1[i][0]
  tmp2=ar1[i][1]
  m,n=ar2.pop()
  if(n<=tmp1):
    ar2.append((m,n))
    ar2.append((tmp1,tmp2))
    continue;
  elif(n>=tmp2):
    ar2.append((m,n))
    continue;
  elif(n<tmp2):
    ar2.append((m,tmp2))
    continue
  
cnt=0
#print(ar1)
#print (ar2)
for a,b in ar2:
  if(a<=l and b>=r):
    if(a==l):
      l+=1
    if(b==r):
      r-=1
    cnt+=(abs(l-r)+1)
   # print(1,cnt)
  elif(a>l and b>=r and a<r):
    if(b==r):
      cnt+=(abs(b-a)-1)
    else:
      cnt+=(abs(r-a))
   # print(2,cnt)
  elif(a<=l and b<r and l<b):
    if(a==l):
      cnt+=(abs(b-a)-1)
    else:
      cnt+=(abs(b-l))
   # print(3,cnt)
  elif(l<a and r>b):
    cnt+=(abs(abs(b-a))-1)
   # print(4,cnt)  
print(cnt)
