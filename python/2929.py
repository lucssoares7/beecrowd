n = int(input())
pilha = []
for i in range(n):
  op = input().split()
  if op[0] == "PUSH":
    v = int(op[1])
    if (len(pilha) == 0):
      minimo = v
    else:
      minimo = min(v, pilha[-1][1])
      #print(minimo)
    pilha.append((v, minimo))
  else:
    if (len(pilha) == 0):
      print("EMPTY")
    elif op[0] == "POP":
      #print(pilha)
      pilha.pop()
    elif op[0] == "MIN":
      print(pilha[-1][1])
