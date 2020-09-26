def triangulo():
    n=input("Introduce un numero: ")

    for i in range(n+1):
        for j in range(n-i):
            print " ",
        for k in range(2*i-1):
            print "*",
        print (" ")

triangulo()
