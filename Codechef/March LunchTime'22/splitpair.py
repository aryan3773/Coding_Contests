for u in range(int(input())):
    n = int(input())
    s = str(n)
    
    p = len(s)
    t = int(s[-1])
    f = False
    
    if(t%2 == 0):
        for i in range(p-1):
            if(int(s[i])%2 == 0):
                f = True
                break
            
    else:
        for i in range(p-1):
            if(int(s[i])%2):
                f = True
                break
            
    if(f):
        print('YES')
        
    else:
        print('NO')