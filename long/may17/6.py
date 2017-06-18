def combination(a,k,n):
	if(k==n):
		a[k]=0
		ans(a,n)
		a[k]=1
		ans(a,n)
		return r
	a[k]=0
	combination(a,k+1,n)
	a[k]=1
	combination(a,k+1,n)
def ans (x,m):
	s=0
	c=0
	multi=1
	mm=0
	for i in range(m+1):
		if(x[i]==1):
			multi=multi*int(b[i])
			mm=1
	if(mm==1):
		if(multi>y):
			r.append(multi) 
			#print(r)
	if(s==0):
		mm=0
 
global b
global y
global r
r=[]
z,y=map(int,input().split())
b=list(map(str,input().split()))
q=[]
for i in range(z):
	q.append(0)
combination(q,0,z-1)
e=pow(2,z,1000000007)-1
print(e-len(r))
