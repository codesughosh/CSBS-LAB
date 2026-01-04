import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from statistics import mode, StatisticsError

house_prices = [300000, 350000, 320000, 280000, 400000, 380000,
                330000, 310000, 290000, 270000, 350000, 380000, 370000]

prices = pd.Series(house_prices)

mean_price = np.mean(prices)
median_price = np.median(prices)
try:
    mode_price = mode(prices)
except StatisticsError:
    mode_price = "No unique mode"
std_dev = np.std(prices, ddof=1)

print("Univariate Analysis of House Prices")
print("-----------------------------------")
print(f"Mean: {mean_price:.2f}")
print(f"Median: {median_price:.2f}")
print(f"Mode: {mode_price}")
print(f"Standard Deviation: {std_dev:.2f}")

plt.figure(figsize=(6, 4))
plt.boxplot(prices, vert=True, patch_artist=True, boxprops=dict(facecolor='lightblue'))
plt.title("Box Plot of House Prices")
plt.ylabel("Price (in USD)")
plt.grid(True, linestyle='--', alpha=0.7)
plt.show()
