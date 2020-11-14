def ejercicio_8():
    precio=input("Introduce un precio: ")
    print "****************************"
    print "     TIPOS DE IVA           "
    print "****************************"
    print "1.GENERAL"
    print "2.REDUCIDO"
    print "3.SUPERREDUCIDO"
    opcion=input("Introduce una opcion: ")
    if opcion ==1:
        resultado= (precio*16)/100
    if opcion ==2:
        resultado= (precio*7)/100
    if opcion==3:
        resultado= (precio*4)/100
    print "el resultado es",resultado

ejercicio_8()
    
