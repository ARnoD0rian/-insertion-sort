file=open('test.txt')
arr=[]
n=int(file.readline())
for line in file:
   arr.append(int(line))#ввод данных
   
   
   
q=n//2
for i in range(1,2*(n//2),2):
    a1=min(arr[i],arr[i-1])
    a2=max(arr[i],arr[i-1])
    arr[i]=a2
    arr[i-1]=a1
    j=i
    while j>1 and a2<arr[j-2]:
        arr[j],arr[j-2]=arr[j-2],arr[j]
        arr[j-1],arr[j-3]=arr[j-3],arr[j-1]
        j-=2
    j-=1
    while j>0 and arr[j]<arr[j-1]:
        arr[j],arr[j-1]=arr[j-1],arr[j]
        j-=1
if n%2==1:
    j=n-1
    while j>0 and arr[j]<arr[j-1]:
        arr[j],arr[j-1]=arr[j-1],arr[j]
        j-=1
print("gotovo")
print(arr)
file.close()