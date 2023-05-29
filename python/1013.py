def maiorAB(a,b):
  a = int(a)
  b = int(b)
  return (a+b+abs(a-b))/2

str = input()
a,b,c = str.split()
print(int(maiorAB(maiorAB(a,b),c)),"eh o maior")
