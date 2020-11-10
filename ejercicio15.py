'''Escriba una función que reciba
una palabra e indique la posición
ue ocupa la letra inicial dentro del
abecedario (por ejemplo, si recibe antena devuelve 1,
            si recibe balón devuelve un 2, etc).'''

def ejercicio_15():
    palabra=raw_input("Introduce una palabra: ")
    abecedario=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
    for cont in range (0,len(abecedario)+1):
        if palabra[0] == abecedario[cont-1]:
            print ("posicion: ", cont)
    
    



ejercicio_15()
