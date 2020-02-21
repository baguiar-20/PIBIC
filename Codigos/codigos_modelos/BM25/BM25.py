import numpy as np
import math as mt
import glob
import re

# ainda falta testar 
documentos = "/home/brendaum/Área de Trabalho/PIBIC/Codigos/codigos_modelos/documentos/*.txt"

def idf(numDoc, freqTermoDoc):
    idf = np.log(1+((numDoc-freqTermoDoc) + 0.5)/(freqTermoDoc + 0.5))
    return idf

def frequency(Doc, Termo):
    qtdTermo = 0
    for i in range(len(Doc)):
        if(Doc[i] == Termo):
            qtdTermo += 1
    return qtdTermo

def mediaDoc(docs):
    cont = 0
    i = 0
    todoDoc = []
    for file in glob.glob(documentos):
        cont += 1
        todoDoc[i] = len(documentos)
        i += 1
    mediaDoc = sum(mediaDoc)
    mediaDoc = mediaDoc/cont

    return mediaDoc

def bm25(D, Q,b = 0.75, K1 = 1, avg_doclen = mediaDoc):
    normaD = len(D)
    
    for i in len(normaD):
        x = frequency(Q,D)*(K1 + 1)
        y = K1 ((1-b)+b*(normaD/avg_doclen))
        bm25 = idf[i] * (x/y)
        return bm25

def calculaIDF(cont_termos, cont_c): #Frequência Inversa do Docmentos
    tabelaIDF = {}
    bm25 = {}
    docCont = cont_c
    for i,j in cont_termos.items():
        print(cont_termos)
        tabelaIDF[i] = math.log(1+((docCont-j+0.5)/j+0.5))
        #bm25[i] = tabelaIDF[i] * ((j*(k1+1))/(j + k1*((1-b)+b*() )
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

def imprimeLIST(listas): #imprime listas
    for i in listas:
        print(i)
