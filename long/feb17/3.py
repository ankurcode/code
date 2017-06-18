t=int(input())
for i in range(t):
  a,b=map(int,input().split())
  ar=list(map(int,input().split()))
  zr=0
  on=0
  nm=a*b
  for j in range(nm):
    if(ar[j]==0):
      zr+=1
    else:
      on+=1
  if(on>zr):
    print(1)
    continue
  else:
    flg=0
    for j in range(b):
      cnt=0
      k=i
      condition= True
      while condition :
        zr1=0
        on1=0
        for e in range(k,k+b):
          if(ar[k]==0):
            zr1+=1
          else:
            on1+=1
        if(on1>zr1):
          cnt+=1
          if(cnt>a//2):
            flg+=1
            break;
        j=(j+b)%nm
        if(j==i):
          condition= False
    if flg>0 :
      print(1)
    else:
      print(0)
      
      
      
