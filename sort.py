import time
time_tests=[0]*100
for h in range(5,6):
    n=10**h
    print(h)
    for g in range(5,6):
        filename='test_'+str(n)+'_'+str(g)+'.txt'
        file=open(filename)
        arr=[int(file.readline()) for _ in range(n)]
        #ввод данных
        start=time.perf_counter()
        #начало работы 
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
        
            #конец работы 
        print(arr)
        end=time.perf_counter()
        print(end-start)
        time_tests[g-1]=end-start
    print("mean=",sum(time_tests)/5)
        
    
         
