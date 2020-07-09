#Murrieta Villegas Alfonso, Valdepino Mendieta Joaquín

def move (n, x, y, z):#se pasan 4 números, el primero la cantidad de discos
    #x ,y & z son las posiciones donde están los discos
    if n==1:#Caso base que es cuando se ha trasladado todos los discos a otra posición
        print('MOVE',x , 'to', y)
    else:
        move(n-1,x,z,y)#Cambio para mover discos de posición 
        print('MOVE',x , 'to', y)
        move(n-1,z,y,x)#Cambio para sobreponer disco sobre otro disco 
        
move(10,"A","B","C")#Se le pasan 10 discos 