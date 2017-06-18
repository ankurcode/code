n=int(input())
ar=[]
for i in range(n):
  a=list(map(int,input().split()))
  a.sort()
  ar.append(a)
for i in range(n):
  for j in range(n):
    print(ar[i][j],end=" ")
  print()


    
    
  
