import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ archivoC.cpp -o archivoC.x")
os.system("./archivoC.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("datos.png")
