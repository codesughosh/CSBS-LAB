import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets, linear_model
from sklearn.metrics import mean_squared_error, r2_score

diabetes = datasets.load_diabetes()

X = diabetes.data[:, np.newaxis, 2]
y = diabetes.target

X_train = X[:-20]
X_test = X[-20:]
y_train = y[:-20]
y_test = y[-20:]

model = linear_model.LinearRegression()

model.fit(X_train, y_train)

y_pred = model.predict(X_test)

print("Linear Regression on Diabetes Dataset")
print("------------------------------------")
print(f"Coefficients: {model.coef_}")
print(f"Intercept: {model.intercept_:.2f}")
print(f"Mean Squared Error: {mean_squared_error(y_test, y_pred):.2f}")
print(f"R² Score: {r2_score(y_test, y_pred):.2f}")

plt.scatter(X_test, y_test, color='black', label='Actual data')
plt.plot(X_test, y_pred, color='blue', linewidth=2, label='Regression line')
plt.title("Linear Regression on Diabetes Dataset")
plt.xlabel("BMI Feature")
plt.ylabel("Disease Progression")
plt.legend()
plt.grid(True, linestyle='--', alpha=0.6)
plt.show()
