def exponente(num,exp):
    if exp==1:
        return num
    else:
        return num*exponente(num,exp-1)

        
def exponenteite(num,exp):
    aux=1
    for i in range (0,exp):
        aux=aux*num
    return aux


def main():
   print(exponenteite(2,3))
   #print(exponente(9,3))
   
main()
