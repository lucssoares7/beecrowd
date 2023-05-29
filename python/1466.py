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
		else:
			atual = self.root  
			while True:
				anterior = atual
				if v <= atual.item:  # ir para esquerda
					atual = atual.esq
					if atual == None:
						anterior.esq = novo
						return
			
				else:  # ir para direita
					atual = atual.dir
					if atual == None:
						anterior.dir = novo
						return
		
	def bfs(self, node,n):
		if not node:
			return
		queue = []
		queue.append(node)
		contador = 0
		while queue:
			node = queue.pop(0)
			contador = contador + 1
			if(contador != n):
				print(node.item,end=" ")
			else:
				print(node.item,end="")
				
			if node.esq:
				queue.append(node.esq)
			if node.dir:
				queue.append(node.dir)
				
c = int(input())
for i in range(c):
	
	n = int(input())
	#print("n = ",n)
	ent = input()
	str = ent.split(" ")
	arv = Tree()
	#print(str[0])
	print("Case",i+1,end=":\n")
	#print("\n",e)
	
	for j in range(n):
		#print(int(str[j]))
		arv.inserir(int(str[j]))
		#arv.preOrder(arv.root)
		
	#print()
	#arv.caminhar()
	arv.bfs(arv.root,n)
	print("\n")
