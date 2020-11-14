def ejercicio_4 ():
    mes=["enero","febrero","marzo","abril","mayo","junio","julio", "agosto", "septiembre", "octubre", "noviembre","diciembre"]
    numero=input("Introduce un numero: ")
    while numero < 1 or numero > 12 :
        numero=input("Introduce un numero del 2 al 12: ")

    for cont in range (1,len(mes)+1):
        if numero == cont:
            print mes[cont-1]

ejercicio_4()
