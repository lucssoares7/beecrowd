class No:

  def __init__(self, key, dir, esq):
    self.item = key
    self.dir = dir
    self.esq = esq


class Tree:

  def __init__(self):
    self.root = No(None, None, None)
    self.root = None

  def inserir(self, v):
    novo = No(v, None, None)  # cria um novo Nó
    if self.root == None:
      self.root = novo
    else:  # se nao for a raiz
      atual = self.root
      while True:
        anterior = atual
        if v <= atual.item:  # ir para esquerda
          atual = atual.esq
          if atual == None:
            anterior.esq = novo
            return
        # fim da condição ir a esquerda
        else:  # ir para direita
          atual = atual.dir
          if atual == None:
            anterior.dir = novo
            return
        # fim da condição ir a direita

  def inOrder(self, atual):
    if atual != None:
      self.inOrder(atual.esq)
      print("",atual.item,end="")
      self.inOrder(atual.dir)

  def preOrder(self, atual):
    if atual != None:
      print("",atual.item,end="")
      self.preOrder(atual.esq)
      self.preOrder(atual.dir)

  def posOrder(self, atual):
    if atual != None:
      self.posOrder(atual.esq)
      self.posOrder(atual.dir)
      print("",atual.item,end="")


  def caminhar(self):
    
    self.preOrder(self.root)
    print("\n")
    
    self.inOrder(self.root)
    print("\n")
    
    self.posOrder(self.root)
    print("\n")

c = int(input())
for i in range(c):
	
	n = int(input())
	ent = input()
	str = ent.split(" ")
	arv = Tree()
	#print(str[0])
	print("Case",i+1,end=":")
	
	for j in range(n):
		arv.inserir(int(str[j]))
	print()
	#arv.caminhar()
	print("Pre.:", end="")
	arv.preOrder(arv.root)
	print()
	print("In..:", end="")
	arv.inOrder(arv.root)
	print()
	print("Post:", end="")
	arv.posOrder(arv.root)
	print("\n")
