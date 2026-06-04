import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns

# 1. 연습 문제 데이터 셋 준비
X = np.array([1, 1.5, 2, 2.5, 3, 3.5])
Y = np.array([28, 29, 32, 34, 30, 29])

# 2. 앞서 구한 회귀 방정식의 계수 설정 (Y = a + bX)
a = 29.0476
b = 0.5714

# 회귀 직선을 그리기 위한 X축 데이터 생성 (최소값부터 최대값까지 촘촘하게)
X_line = np.linspace(X.min() - 0.5, X.max() + 0.5, 100)
Y_line = a + b * X_line

# 3. 그래프 스타일 설정 및 그리기
sns.set_theme(style="whitegrid")  # 깔끔한 배경 스타일
plt.figure(figsize=(8, 5))

# 실제 데이터 포인트 (산점도 - Scatter Plot)
plt.scatter(
    X,
    Y,
    color="darkorange",
    s=100,
    zorder=5,
    label="Actual Data (Concrete)",
)

# 우리가 계산해서 구한 회귀 직선 (Line Plot)
plt.plot(
    X_line,
    Y_line,
    color="royalblue",
    linewidth=2.5,
    label=f"Regression Line: Y = {a:.4f} + {b:.4f}X",
)

# 4. 축 이름 및 타이틀 설정
plt.title("Linear Regression: Fly-ash vs Concrete Strength", fontsize=14, pad=15)
plt.xlabel("Fly-ash (X)", fontsize=12)
plt.ylabel("Concrete Strength (Y)", fontsize=12)
plt.xlim(0.5, 4.0)  # X축 범위 보기 좋게 조절
plt.ylim(25, 38)  # Y축 범위 보기 좋게 조절

# 범례(Legend) 표시
plt.legend(fontsize=11, loc="upper left")

# 그래프 화면에 출력
plt.show()