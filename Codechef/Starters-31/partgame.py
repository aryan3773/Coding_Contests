for u in range(int(input())):
    n = int(input())
    x = [int(w) for w in input().split()]
    
    z = n*(n-1)
    f = True
    
    for i in range(n):
        if(n <= x[i]%z < z or x[i]%z == 0):
            print('Alice')
            f = False
            break
    
    if(f):
        print('Bob')