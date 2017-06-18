t=int(input())

for i in range(t):
  n=int(input())
  ar=list(map(int,input().split()))
  zr=0
  on=0
  rg=len(ar)
  for j in range(len(ar)):
    if(ar[j]==0):
      rg=j
      break
  for j in range(rg,len(ar)):
    if(ar[j]==0):
      zr+=1
    elif(ar[j]==1):
      on+=1

  total=0
  total+=(zr+on)*100+zr*1000
  print(total)
      
