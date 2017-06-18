import heapq
t=int(input())
for i in range(t):
  n,k=map(int,input().split())
  a=input()
  ch=a[0]
  q=[]
  len=1
  lenc=[];lg=0
  for j in range(1,n):
    if(a[j]==ch):
      len+=1
    else:
      if(len>1):
    #    print('push',ch,len)
        lenc.append(len)
        lg+=1
      len=1
      ch=a[j]
  if(len>1):
   # print('push',ch,1,len)
    lenc.append(len)
    lg+=1
  lenc.sort()
#  print(lenc)
  s1='';s2='';
  for j in range(n):
    if(j%2==0):
      s1+='0'
      s2+='1'
    else:
      s1+='1'
      s2+='0'
  f1=0;f2=0;
  for j in range(n):
    if(s1[j]==a[j]):
      f1+=1
    if(s2[j]==a[j]):
      f2+=1
  an1=min(f1,f2)
  if(k>=an1):
    print(1)
    continue
  arr2=[]
  for j in range(lg):
    arr2.append(1)
    heapq.heappush(q,(-lenc[j],j))
  m1,m2=heapq.heappop(q)
  m1=abs(m1);f1=1
  heapq.heappush(q,(-m1,m2))
  while(1):
    if(m1==2 or f1>k):
      break
    lk1,lk2=heapq.heappop(q)
    lk=arr2[lk2]
    n= ((lenc[lk2]-lk)/(lk+1))
    
    if(n>(lenc[lk2]-lk)//(lk+1)):
      n+=1
    nn=int(n)
  #  print(nn,lk1,lk2)
    heapq.heappush(q,(-nn,lk2))
    arr2[lk2]+=1
    m1,m2=heapq.heappop(q)
    m1=abs(m1)
    heapq.heappush(q,(-m1,m2))
    f1+=1
  print(m1)
    
    
  
  
    
    
  
  
      

      
