import numpy as np
import matplotlib.pylab as plt
Sol=np.loadtxt('First.txt')
y=np.exp(-Sol[:,0])
Error=np.abs(y-Sol[:,1])/np.abs(y)
plt.figure()
plt.plot(Sol[:,0],Sol[:,1],color="teal",label="Númerica")
plt.plot(Sol[:,0],y,color="orange",label="Analitica")
plt.savefig('Solucion Analitica vs Númerica')
plt.figure()
plt.plot(Sol[:,0],Error,color="teal",label="Error")
plt.savefig('Error')
