file=open('testr.txt')
arr=[]
n=int(file.readline())
for line in file:
   arr.append(int(line))#ввод данных
   
   
   
for i in range(1,n):
    left=0
    right=i
    while (right-left>1):
        q=(right+left)//2
        if arr[i]<=arr[q]:
            right=q
        else:
            left=q
    q=arr[i]
    arr.pop(i)
    arr.insert(left+1,q)
    if arr[0]>arr[1]:
        arr[0],arr[1]=arr[1],arr[0]
print(arr)