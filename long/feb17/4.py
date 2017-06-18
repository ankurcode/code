import math
n,q=map(int,input().split())
ar=list(map(int,input().split()))
ar1=[1]
tmp=2
for i in range(1,n):
  if ar[i]==ar[i-1]:
    ar1.append(tmp)
    tmp+=1
  else:
    ar1.append(1)
    tmp=2

#print(ar1)
for i in range(q):
  l,r,k=map(int,input().split())
  l-=1
  r-=1
  if(ar1[l+k-1]==k):
    print(ar[l+k-1])
    continue
  ans=0
  ctmp=0
  pos=r
  cnt=0
  flg=0
  while(pos>=l+k-1):
    if(ar1[pos]>=k):
      flg+=1
      ans=ar[pos]
      break
    else:
      pos-=ar1[pos]
    #  print(pos)

  if(flg==0):
    print(-1)
  else:
    print(ans)
    
    
    
  
