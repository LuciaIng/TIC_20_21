def ejercicio_16():
    numero=input("Introduce un numero: ")
    ordinal=["primero","segundo","tercero","cuarto","quinto","sexto","septimo","octavo","noveno","decimo"]
    for cont in range (0,len(ordinal)+1):
        if numero == cont:
            print ordinal[cont-1]

ejercicio_16()
