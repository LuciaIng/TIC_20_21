'''Escriba una funci�n que reciba un numero cualquiera y que devuelva como resultado la suma de sus
d�gitos; por ejemplo, si el n�mero fuera 23 la suma seria 5.'''
def ejercicio_12():
    numero=input ("Introduce un numero de 4 cifras:")
    suma=0
    for cont in range (3,0):
        divisor=10^cont
        cociente=numero/divisor
        print cociente
        suma=suma+cociente
        numero=numero%divisor

ejercicio_12 ()
