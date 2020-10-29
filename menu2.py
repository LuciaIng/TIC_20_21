'''una letra que representa una de las siguientes
operaciones:
S de suma,
R de resta,
M multiplicacioón y
D división
La función muestra por pantalla la operación propuesta y su resultado.'''

def menu():
    interruptora=1
    print "Introduce dos numero enteros"
    numero1=input("numero 1= ")
    while(interruptora==1):
        numero2=input("numero 2= ")
        print "***********************************"
        print "*            MENU                 *"
        print "***********************************"
        print "1. SUMA "
        print "2. RESTA"
        print "3. MULTIPLICACION"
        print "4. DIVISION"
        opcion=input ("Teclee la opcion elegida ")
        if (opcion==1):
            resultado=numero1+numero2
            interruptora=0
        if (opcion==2):
            resultado=numero1-numero2
            interruptora=0
        if (opcion==3):
            resultado=numero1*numero2
            interruptora=0
        if (opcion==4):
            if (numero2!=0):
                resultado=numero1/numero2
                interruptora=0
            else:
                interruptora=1
                print "Has intentado dividir entre 0"
                print "Introduce un nuevo numero"

        
    print "El resultado es ", resultado

menu()
        
