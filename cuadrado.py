def cuadrado():
    m = input("Numero de filas:")
    n = input("Numero de columnas:")

    for i in range (1,m + 1):
        for j in range (1,n + 1):
            print "*",
        print(" ")

cuadrado()
