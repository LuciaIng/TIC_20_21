'''Escriba una funci�n que reciba
un n�mero entero del 1 al 7 y
escriba en pantalla el correspondiente
d�a de la semana.'''

def ejercicio_3():

    dias_semana=["Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"]
    numero=input("Escribe un n�mero: ")
    while numero < 1 or numero > 7:
        numero=input("Escribe un numero del 1 al 7: ")
    for cont in range(0,len(dias_semana)+1):
        if numero == cont :
            print dias_semana[cont-1]

ejercicio_3()
    
