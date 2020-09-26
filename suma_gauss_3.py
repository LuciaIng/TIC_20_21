def suma_gauss_3():
    n_final=input("Introduce hasta que numero ")
    suma_acumulada=0
    for cont in range(1,n_final+1):
        if(cont%2==0):
            suma_acumulada=suma_acumulada+cont
    print "suma_acumulada=", suma_acumulada

suma_gauss_3()
