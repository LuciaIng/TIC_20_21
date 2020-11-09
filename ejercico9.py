'''Escribir una función que devuelva el salario semanal
de un trabajador en base a las horas trabajadas
y el pago por hora trabajada. Las horas ordinarias
(40 primeras horas de trabajo) a 30 euros/hora y las
horas siguientes a 1.5 veces el precio de la hora ordinaria'''

def ejercicio_9():
    horas_totales=input("Cuantas horas extras:")
    precio_normal=30
    precio_extra=1.5*precio_normal
    if(horas_totales<=40):
        salario=horas_totales*precio_normal
    else:
        salario=40*precio_normal+(horas_totales-40)*precio_extra
    print "SALARIO=", salario

ejercicio_9()
    
