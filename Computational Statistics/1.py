import numpy as np
import matplotlib.pyplot as plt

samples = np.random.uniform(0, 1, 1000)

plt.hist(samples, bins=30, density=True, alpha=0.6, color='skyblue', edgecolor='black',
         label="Empirical PDF")

x = np.linspace(0, 1, 100)
y = np.ones_like(x)
plt.plot(x, y, 'r-', linewidth=2, label="Theoretical PDF")

plt.title("PDF of Uniform(0,1) Distribution")
plt.xlabel("Value")
plt.ylabel("Density")
plt.legend()
plt.grid(True)
plt.show()
