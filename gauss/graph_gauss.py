import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('por.txt')

x=archivo[:,0]
u=archivo[:,1]
u_0=archivo[:,2]

plt.plot(x,u)
plt.plot(x,u_0)
plt.ylim(0.9,1.5)
plt.title('Gauss',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('Gauss.png')
plt.close()
