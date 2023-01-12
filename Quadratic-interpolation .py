import numpy as np


def quadric_equation(a1,b1,c1,a,a2,b2,c2,b,a3,b3,c3,c,x):

    array=np.array([[a1,b1,c1],[a2,b2,c2],[a3,b3,c3]])
    array2=np.array([[a],[b],[c]])

    X=np.dot(np.linalg.inv(array),array2)
    u1=(X[0][0])
    u2=(X[1][0])
    u3=(X[2][0])
    print(u1+u2*x+u3*x*x)
    quadric_equation(1,1,1,6,0,2,5,-4,2,5,-1,27,10)

