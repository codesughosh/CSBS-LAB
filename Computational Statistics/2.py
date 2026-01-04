import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

mean = 0
std_dev = 1

samples = np.random.normal(mean, std_dev, 1000)

plt.hist(samples, bins=30, density=True, alpha=0.6, color='skyblue', edgecolor='black',
         label="Empirical PDF")

x = np.linspace(mean - 4*std_dev, mean + 4*std_dev, 200)
y = norm.pdf(x, mean, std_dev)
plt.plot(x, y, 'r-', linewidth=2, label="Theoretical PDF")

plt.title(f"Normal Distribution (mean={mean}, std_dev={std_dev})")
plt.xlabel("Value")
plt.ylabel("Density")
plt.legend()
plt.grid(True)
plt.show()
