""""
MURRIETA_VILLEGAS_ALFONSO
5_EJERCICIO / PRÁCTICA_10  
"""

def main():
    
    import matplotlib.pyplot as plt
    from numpy import linspace
    from math import  sin #por el momento no sale el seno al graficarse 
    from mpl_toolkits.mplot3d import Axes3D
    
    
#Entrada del programa
    x = linspace(0, 5, 20) # El tercero es la cantidad de divisiones 

    fig, ax = plt.subplots(facecolor="w", edgecolor="k")
    #k = black ya que b = blue
    ax.plot(x, x**2, marker="o", color="r", linestyle='None')
    
    ax.grid(True)
    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.grid(True)
    ax.legend(["y = x**2"])
    
    plt.tittle('Puntos')
    plt.show()
    
    fig.savefig("gráfica.png")

main()