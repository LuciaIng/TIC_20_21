'''18.Defina una funci�n que reciba
tres cadenas (nombre, apellido1, apellido2) y
las concatene en una
�nica cadena sobre nombre,
dejando un espacio entre cada palabra.'''

def ejercicio18():
    nombre=raw_input("Introduce nombre: ")
    apellido=raw_input("Introduc apellido: ")
    apellido2=raw_input("Introduce apellido2: ")
    completo=(nombre)+" "+(apellido)+" "+(apellido2)

    print "completo:",completo 
ejercicio18()
