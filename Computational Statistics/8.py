import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt

Hours_Studied = np.array([1, 2, 3, 4, 5, 6]).reshape(-1, 1)
Pass_or_Fail = np.array([0, 1, 1, 0, 1, 0])

model = LogisticRegression()

model.fit(Hours_Studied, Pass_or_Fail)

y_pred = model.predict(Hours_Studied)

accuracy = accuracy_score(Pass_or_Fail, y_pred)
print("Logistic Regression Model for Student Pass/Fail Prediction")
print("-----------------------------------------------------------")
print(f"Coefficients: {model.coef_}")
print(f"Intercept: {model.intercept_}")
print(f"Accuracy: {accuracy:.2f}")

plt.scatter(Hours_Studied, Pass_or_Fail, color='black', label='Actual')
plt.xlabel("Hours Studied")
plt.ylabel("Pass (1) / Fail (0)")
plt.title("Logistic Regression - Pass/Fail Prediction")

X_test = np.linspace(0, 7, 100).reshape(-1, 1)
y_prob = model.predict_proba(X_test)[:, 1]
plt.plot(X_test, y_prob, color='blue', linewidth=2, label='Predicted Probability')
plt.legend()
plt.grid(True, linestyle='--', alpha=0.6)
plt.show()
