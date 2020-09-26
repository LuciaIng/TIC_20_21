def suma_gauss():
    n_final=100
    suma_acumulada=0
    for cont in range(1,n_final+1):
        suma_acumulada= suma_acumulada+cont
    print "La suma de los números hasta ", n_final
    print "=", suma_acumulada

suma_gauss()
