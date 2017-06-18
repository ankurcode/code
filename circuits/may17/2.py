t=int(input())
n,k=map(int,input().split())
avai=[]
for i in range(n):
  avai.append(input())

alr=[]
for i in range(k):
  alr.append(input())
tm=[]
for i in range(n):
  tm.append([int(avai[:2]),int(avai[2:5]),int(avai[5:7])])
  
