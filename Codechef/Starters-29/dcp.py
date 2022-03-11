mod = 10**9 + 7

for u in range(1):
    n, m = map(int, input().split())
    x = [int(w) for w in input().split()]
    
    for i in range(m):
        ele, d = map(int, input().split())
        temp = x[ele-1]
        
        p = [int(w) for w in input().split()]
        l = len(p)
        for j in range(0, l, 2):
            a = p[j]
            b = p[j+1]
            
            x[b-1] = (temp*a + x[b-1])%mod
            
        x[ele-1] = 0
        
    for i in x:
        print(i%mod)