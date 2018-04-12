import numpy as np
import matplotlib.pylab as plt
Sol=np.loadtxt('Second.txt')
y=np.cos(Sol[:,0])
Error=np.abs(y-Sol[:,1])
plt.figure()
plt.plot(Sol[:,0],Sol[:,1],color="teal",label="Númerica")
plt.plot(Sol[:,0],y,color="orange",label="Analitica")
plt.savefig('Solucion Analitica vs Númerica Segundo Orden')
plt.figure()
plt.plot(Sol[:,0],Error,color="teal",label="Error")
plt.savefig('Error Segundo Orden')
