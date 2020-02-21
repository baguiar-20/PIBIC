import functionsBasics
from functionsBasics import * 

#Módulo de Variáveis
cont_py = 0
cont_java = cont_c = cont_cpp = 0

#Declaração de listas
vocabulario_python = []
vocabulario_java = []
vocabulario_c = []
vocabulario_cpp = []

termos_colecao_py = []
termos_colecao_java = []
termos_colecao_c = []
termos_colecao_cpp = []

#declaração de dicionários
cont_termos = {}
nome = 'py'
list_py = []
cont_py = contARCHIVES(nome)
print("Qtde archives python: ", cont_py)

nome = 'java'
list_java = []
cont_java = contARCHIVES(nome)
print("Qtde archives java: ", cont_java)

nome = 'c'
list_c = []
cont_c = contARCHIVES(nome)
#print("Qtde archives C: ", cont_c)

nome = 'cpp'
list_cpp = []
cont_cpp= contARCHIVES(nome)
#print("Qtde archives Cpp: ", cont_cpp)

#dictionaries IDF
idf_colection_py = {}
