n,z,p=map(int,input().split())
if(n<z):
        z=n
kl=list(map(int,input().split()))
b=list(input())
a=[]
for i in range(2):
        for j in kl:
                a.append(j)       
mx_ln=[]

mx=1
ln=len(a)
s=0
for k in range(z):
        s=s+a[ln-k-1]
mx_ln.append(s)
for k in range(ln-z-1,-1,-1):
        s=s+a[k]-a[k+z];
        mx_ln.append(s)
n=(n-z)+1
en=[]
tmp=0
for i in range(n):
        while(en!=[]):
                if(mx_ln[i] >= mx_ln[en[-1]]):
                        en.pop()
                else:
                        break
        en.append(i)
        tmp=i
en_array=[]
tmp+=1
for j in range(tmp,len(mx_ln)):
        en_array.append(mx_ln[en[0]])

        while(en!=[]):
                if(en[0] <= (j-n)):
                        en.pop(0)
                else:
                        break
        while(en!=[]):
                if(mx_ln[j] >= mx_ln[en[-1]]):
                        en.pop()
                else:
                        break

        en.append(j)
en_array.append(mx_ln[en[0]])
tmp=0
en_array.pop()
for i in range(p):
        if(b[i]=='?'):
                print(en_array[tmp])
        elif(b[i]=='!'):
                tmp=(tmp+1)%len(en_array)

        
                

        
        
