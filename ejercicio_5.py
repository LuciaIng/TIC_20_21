def ejercicio_5 ():
    numeroDia=input("Introduce el numero del dia: ")
    numeroAno=input("Introduce el numero del año: ")
    mes=["enero","febrero","marzo","abril","mayo","junio","julio", "agosto", "septiembre", "octubre", "noviembre","diciembre"]
    numero=input("Introduce el numero del mes: ")
    for cont in range (1,len(mes)+1):
        if numero == cont:
            print numeroDia , "de" , mes[cont-1] , "de" , numeroAno
    
ejercicio_5()
