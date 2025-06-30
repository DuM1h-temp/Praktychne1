print("Введіть три числа:")
t1, t2, t3 = map(int, input().split())

t=(t1+t2+t3)/3
print("Час необхідний для з'їдання пирога:", round(t,2))