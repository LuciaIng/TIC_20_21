'''Introduce un nombre y un apellido. Genera una contrasena
a partir de 3 letras del nombre y tres del apellido.'''
def contrasena_2():
    nombre=raw_input("Nombre: ")
    apellido=raw_input("Apellido: ")
    contrasena=nombre[-3:]+apellido[-3:]
    print("Contrasena: ",contrasena)
    
   

contrasena_2()

