'''Haz un programa que lea una cadena y sustituya
las vocales por la letra u. palabra de 10,For '''
def ululador():
    palabra=raw_input("Introduce una palabra para ulular: ")
    for cont in range(0,10):
        if (palabra[cont]=='a' OR palabra[cont]=='e'):
            print 'u'
        else:
            print palabra[cont]
    
    
ululador()
