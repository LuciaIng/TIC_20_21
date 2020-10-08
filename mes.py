'''Me va a pedir el número de un mes'''
def mes():
    abreviaMes="EneFebMarAbrMayJunJulAgoSepOctNovDic"
    numeroMes=input("Introduce mes:")
    pos=(numeroMes-1)*3
    print("El mes es:", abreviaMes[pos:pos+3])

mes()
