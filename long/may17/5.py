n=int(input())
acc=[]
rej=[]
for i in range(n):
  ch,web=input().split()
  if(ch=='+'):
    acc.append(web)
  else:
    rej.append(web)

print(acc)
print(rej)
    
    
