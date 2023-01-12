def Runge_kutta(func, a2, start_value, x, xn, h):

    print(func)
    def f(x):
        f=eval(func)
        return f


    a1 = 1 - a2
    p1=.5/a2
    q11=.5/a2

    while 1:
        k1 = f(start_value)
        k2 = f(start_value + q11 * k1 * h)
        if(x==xn):break

        start_value= start_value + (a1*k1 + a2*k2) *h
        x=x+h

    print(f"value is : {start_value}")

Runge_kutta("(-2.2067*10**-12) *(x**4-81*10**8)",.5,1200,0,480,240)


