import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import poisson

lam = 4

x = np.arange(0, 15)

pmf_values = poisson.pmf(x, lam)

plt.bar(x, pmf_values, color='skyblue', edgecolor='black')

plt.title("Poisson Distribution (λ = 4)")
plt.xlabel("k")
plt.ylabel("P(X = k)")

plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.show()
