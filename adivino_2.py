'''Dime un número al azar entre 1 y 10 y lo adivino'''
import random

def adivino_2():
    maxn=100
    numero=random.randint(1,maxn)
    intento = input("Intentalo: ")
    while intento!= numero:
        if intento > numero:
            print "Demasiado grande"
        if intento < numero:
            print "Demasiado pequeño"
        intento=input("intentalo: ")

    print "Ahora has acertado"


adivino_2()
