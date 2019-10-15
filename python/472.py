while(True):
    x = input().split(" ")
    d = int(x[0])
    n = int(x[1])

    b = True
    
    h = input().split(" ")
    for i in range(n):
        if i == 0:
            m = int(h[0])
            _p = m
        else:
            _c = int(h[i])
            if(_c <= _p):
                if(_p-m > d):
                    b = False
                m = _c
            if(i==n-1):
                if(_c - m > d):
                    b = False
            _p = _c
    if b:
        print("APTA")
    else:
        print("NO APTA")