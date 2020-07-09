
    
def torres(n,x,y,z):
    if n>=1:
        torres(n-1,x,z,y)
        print("se movio el disco superior de la torre {}".format(x))
        print("a la parte superior de la torre {}".format(y))
        torres(n-1,z,y,x)

def main():
   #print(exponente(9,3))
   ##print(exponente(9,3))
   torres(10,1,2,3)
main()

