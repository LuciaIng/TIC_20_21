'''Escriba una funci�n que reciba
una cadena de caracteres que represente
una fecha (formato �04 de
Febrero de 2009�) y devuelva un n�mero que
represente el mes (en el ejemplo anterior devolver�a un
2).'''

def ejercicio_19():
    from datetime import datetime

    str = '9 de 15 de 18'
    date_object = datetime.strptime(str, '%m de %d de %y')

    print(date_object)
    
ejercicio_19()
