for u in range(int(input())):
    n, q = map(int, input().split())
    
    a = input()
    b = input()
    
    x = []
    for i in range(n):
        temp = ord(a[i]) - ord(b[i])
        if(temp <= 0):
            x.append(abs(temp))
            
        else:
            x.append(26 - temp)
    
    p = [0]
    for i in range(1, n+1):
        if(i%2):
            p.append(p[i-1] - x[i-1])
            
        else:
            p.append(p[i-1] + x[i-1])
            
    for w in range(q):
        l, r = map(int, input().split())
        
        if((p[r] - p[l-1])%26 == 0):
            print('Yes')
            
        else:
            print('No')