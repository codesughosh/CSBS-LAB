import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from statistics import mode, StatisticsError

heights = [165, 170, 168, 172, 175, 169, 180, 160, 165, 172, 168, 176, 170, 173, 165]

height_series = pd.Series(heights)

mean_height = np.mean(height_series)
median_height = np.median(height_series)
try:
    mode_height = mode(height_series)
except StatisticsError:
    mode_height = "No unique mode"
std_dev_height = np.std(height_series, ddof=1)

print("Univariate Analysis of Student Heights")
print("--------------------------------------")
print(f"Mean: {mean_height:.2f} cm")
print(f"Median: {median_height:.2f} cm")
print(f"Mode: {mode_height} cm")
print(f"Standard Deviation: {std_dev_height:.2f} cm")

plt.figure(figsize=(7, 4))
plt.hist(height_series, bins=6, color='lightgreen', edgecolor='black', alpha=0.7)
plt.title("Histogram of Student Heights")
plt.xlabel("Height (cm)")
plt.ylabel("Frequency")
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.show()
