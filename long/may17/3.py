t=int(input())
for i in range(t):
  n=int(input())
  ar=list(map(int,input().split()))
  ar.sort()
  ar1=[]
  for j in range(n):
    ar1.append(ar[j])
    ar1.append(ar[j+n])
  print (max(ar1[n],ar1[n-1]))
  for j in ar1:
    print(j,end=' ')
  print()
