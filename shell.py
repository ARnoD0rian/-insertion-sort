file=open("test.txt")
n=int(file.readline())
arr=[]
for line in file:
    arr.append(int(line))#ввод данных
    
    
    
q=n//2
while q>0:
    for i in range(0,n-q):
        j=i
        while j>=0 and arr[j]>arr[j+q]:
            arr[j],arr[j+q]=arr[j+q],arr[j]
            j-=1
    q=q//2
print(arr)