import numpy as np
import matplotlib.pyplot as plt

T = 1.0
N = 100
t = np.linspace(0, T, N+1)
i = 3 * np.sin(2 * np.pi * t)

plt.figure(figsize=(10, 5))
plt.subplot(1,2,1)
plt.plot(t, i, label='i(t)')
plt.title('Gelombang Arus i(t)')
plt.xlabel('t (detik)')
plt.ylabel('i(t) (A)')
plt.grid()
plt.legend()

plt.subplot(1,2,2)
plt.plot(t, i**2, label='i^2(t)', color='orange')
plt.title('Kuadrat Arus i²(t)')
plt.xlabel('t (detik)')
plt.ylabel('i²(t) (A²)')
plt.grid()
plt.legend()

plt.tight_layout()
plt.show()
