'''Escribe un programa que lea las edades de 10 alumnos
y devuelva la edad del mayor, la edad
del menor, la edad media y la diferencia de edades entre
el mayor y el menor.'''
def edad_media():
    #edad_mayor
    #edad_menor
    #diferencia
    suma_edades=0
    print "INTRODUCE LAS EDADES"
    for cont in range(1,11):
        print "edad",cont,":"
        edad=input()#instrucción i/o
        suma_edades = suma_edades + edad
    print "La suma de las edades es",suma_edades

edad_media()
        
