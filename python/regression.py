import numpy as np
from sklearn.linear_model import LinearRegression

# 데이터 준비
X = np.array([1, 1.5, 2, 2.5, 3, 3.5]).reshape(-1, 1)
y = np.array([28, 29, 32, 34, 30, 29])

# 모델 생성 및 학습
model = LinearRegression()
model.fit(X, y)

# 기울기(b), Y절편(a) 출력
print(f"기울기: {model.coef_[0]:.4f}")       # 0.5714
print(f"Y절편: {model.intercept_:.4f}")    # 29.0476

# X = 4.5일 때 예측
print(f"X=4.5일 때 예측값: {model.predict([[4.5]])[0]:.4f}") # 31.6190