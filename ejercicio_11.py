'''Escribir una funci�n llamada &quot;cantidad&quot;
que reciba como argumento un n�mero entero y una palabra y
que luego diga si la palabra tiene la misma cantidad
de letras que el n�mero entero enviado.'''


def ejercicio11():

    numero_entero = input("Numero entero: ")
    palabra = raw_input("palabra: ")

    if(numero_entero == len(palabra)):
        print "La longitud de la palabra traducida se corresponde con:", numero_entero
    else:
        print "No se corresponde"
ejercicio11()

        
        
