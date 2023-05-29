entrada = input()
n = int(entrada)
str = input()
pessoas_inicial = str.split(" ")
entrada = input()
m = int(entrada)
str = input()
pessoas_sairam = str.split(" ")
#print(pessoas_inicial)
for i in range(m):
  pessoas_inicial.remove(pessoas_sairam[i])
for j in range(n-m):
  if(j < n-m-1):
    print(pessoas_inicial[j],end=" ")
  else:
    print(pessoas_inicial[j])