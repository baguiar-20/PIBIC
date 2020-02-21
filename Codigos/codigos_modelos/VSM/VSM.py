import math
#import functionsBasics
from functionsBasics import *  

def calcNgram(listapalavras, n):#calcula as n-gramas dos tokens gerados
    ngrams = []
    vocabulario = []
    for i in range(len(listapalavras)-(n-1)):
        ngrams.append(listapalavras[i:i+n])
    for n, i in enumerate(ngrams):
        auxi = "".join(str(x) for x in i)
        vocabulario.append(auxi)
    return vocabulario

def insertTERMOS(file, vocab_atual, colecao):
    key_file = file
    vocab_file = vocab_atual
    colecao.append({key_file:vocab_file})
def preencheTERMOS(termos_colecao_py, list_py):#Nº de doc em q o termo ocorre na coleção
    termos_number = {}
    for i in termos_colecao_py:
        termos_number[i] = None
    for i in termos_number:
        cont = 0
        for j in list_py:
            for x in j.items():
                if i in x[1]:
                    cont +=1
                    termos_number[i] = cont
    return termos_number

def calculaIDF(cont_termos, cont_py): #Frequência Inversa do Docmentos
    tabelaIDF = {}
    qtdeDOCPY = cont_py
    for i,j in cont_termos.items():
        tabelaIDF[i] = math.log(qtdeDOCPY/j)
    return tabelaIDF

def termsFrequency(lista_doc_terms, idf_colection_py):
    print("--teste---")
    tf = {} #struct q armazena o tf de cada termo no documento i
    qtde = 0
  
    for x in idf_colection_py:
        for i in lista_doc_terms:
            for j in i.items():
                if i in x[1]:
                    qtde = x[1].count(i)

