def ejercicio():
    num1=input("Introduce un numero: ")
    num2=input("Introduce un numero: ")

    print "***********************************"
    print "*            MENU                 *"
    print "***********************************"
    print "1. SUMA "
    print "2. RESTA"
    print "3. MULTIPLICACION"
    print "4. DIVISION"

    opcion=input("Elige opcion: ")
    while opcion<1 or opcion>4:
        opcion=input("Elige opcion permitida: ")
    if opcion==1:
        suma=num1+num2
        print(suma)
    if opcion==2:
        resta=num1-num2
        print resta
    if opcion==3:
        multiplicacion=num1*num2
        print multiplicacion
    if opcion==4:
        while num2==0:
            num2=input("Introduzca diferente a 0: ")
        division=num1/num2
        print division
    
ejercicio()
