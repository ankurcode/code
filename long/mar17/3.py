t=int(input())
for i in range(t):
  n=int(input())
  ar=[]
  a=[]
  for j in range(n):
    a=list(map(int,input().split()))
    ar.append(a)

  zr=0
  on=0
  sz=n*n
  moi=n-1
  flg=0
  for i in range(n):
    for j in range(n):
      if(ar[i][j]==0):
        zr+=1
  if(zr==0):
    print(moi)
  else:
    for k in range(1,n+1):
      if(zr>=2*k):
        moi-=1
        zr-=2*k
       # print(moi,k,zr)
      else:
        print(moi)
        flg=1
        break
    if(flg==0):
      print(moi)
