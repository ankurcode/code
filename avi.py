import itertools
boulder=[(1,1),(0,2),(8,3),(-1,4)]
b1=[]
for a,b in boulder:
  if(a!=-1):
    b1.append((a,b))
bridge1=3     #max 4
bridge2=2	#max 3
sum1=9
ary1=list(itertools.combinations(b1,bridge1))
ary2=list(itertools.combinations(b1,bridge2))
pos=-1
pos1=-1
for i in range(len(ary1)):
  sum=0
  for a,b in (ary1[i]):
    sum+=a

  if(sum==sum1):
    pos=i
    break
for i in range(len(ary2)):
  sum=0
  for a,b in (ary2[i]):
    sum+=a
  if(sum==sum1):
    pos1=i
    break
import time
time.sleep(5)
ind=[]
ch=0
if(pos!=-1):
  ch=1
  for a,b in ary1[pos]:
    ind.append(b)
else:
  ch=2
  for a,b in ary2[pos1]:
    ind.append(b)
print ind,ch

    
