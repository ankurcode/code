t=int(input())
for i in range(t):
  n=int(input())
  str=input()
  flg=0
  flg1=0
  for i in str:
    if(i=='.'):
      continue;
    elif(i=='H'):
      if(flg==0):
        flg+=1
        continue
      else:
        flg1+=1
        break
    else:
      if(flg==1):
        flg=0
        continue;
      else:
        flg1+=1
        break

  if(flg==1 or flg1>0):
    print('Invalid')
  else:
    print('Valid')
