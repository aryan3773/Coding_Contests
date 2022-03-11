for u in range(int(input())):
    n = int(input())
    x = [int(w) for w in input().split()]
    
    a = []
    b = []
    
    for i in range(n):
        if(i%2):
            b.append(abs(x[i]))
            
        else:
            a.append(abs(x[i]))
            
    b = sorted(b)
    a = sorted(a)
    ans = sum(a) - sum(b)
    #print(a, b)
    
    temp1 = a[0]
    temp2 = b[-1]
    
    a[0] = temp2
    b[-1] = temp1
    
    ans = max(ans, sum(a) - sum(b))
    print(ans)