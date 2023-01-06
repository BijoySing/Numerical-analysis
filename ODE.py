def ODE(func,start_value,x,xn,h):

    print(func)
    def f(x):
        f=eval(func)
        return f



    while 1:

        if(x==xn):break

        start_value= start_value + f(start_value)*h
        x=x+h

    print(f"value is : {start_value}")

ODE("(-2.2067*10**-12) *(x**4-81*10**8)",1200,0,480,240)


