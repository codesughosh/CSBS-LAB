import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

mean = 50
std_dev = 10

samples = np.random.normal(mean, std_dev, 1000)

sample_mean = np.mean(samples)
sample_std = np.std(samples)
print(f"Sample Mean: {sample_mean:.2f}")
print(f"Sample Standard Deviation: {sample_std:.2f}")

plt.hist(samples, bins=30, density=True, alpha=0.6, color='skyblue', edgecolor='black',
         label="Empirical PDF")

x = np.linspace(mean - 4*std_dev, mean + 4*std_dev, 200)
y = norm.pdf(x, mean, std_dev)
plt.plot(x, y, 'r-', linewidth=2, label="Theoretical PDF")

plt.title("Normal Distribution (mean=50, std=10)")
plt.xlabel("Value")
plt.ylabel("Density")
plt.legend()
plt.grid(True)
plt.show()
