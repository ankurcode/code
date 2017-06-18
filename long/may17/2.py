t=int(input())
for i in range(t):
  n=int(input())
  ar=list(map(int,input().split()))
  tmp=ar[0]
  for j in range(1,n):
    if(tmp<ar[j]):
      tmp=ar[j]
    else: continue
  print(n-tmp)
    
    
  
