import numpy as np
import math as mt
import glob
import re

# ainda falta testar 


def termosConsulta(doc): #numero de termos do documento que ocorre na consulta
    query = []
    termosConsulta = {}
    cont = 0
    d = {}
    for i in doc:
        for j in i.items():
            query = j
            for t in doc:
                for k in t.items():
                    consulta = k
                    for c in query[1]:
                        d = consulta[1].count(c)
                        termosConsulta[cont] = [query[0],consulta[0], c, d]
                        cont += 1
    for i in termosConsulta:
        print(termosConsulta[i])
    return termosConsulta


def calculaIDF(cont_termos, cont_c, media_doc, b= 0.75, K1 =1): #Frequência Inversa do Docmentos
    tabelaIDF = {}
    #bm25 = {}
    #docCont = np.zeros(len(cont_c))
    for i in cont_c:
        print(cont_c)
    #avg_doclen = media_doc
        #print(docCont[i])
    for i,j in cont_termos.items():
        
        tabelaIDF[i] = mt.log((j+0.5)/j+0.5)
        #bm25[i] = tabelaIDF[i] * ((j*(K1+1))/(j + K1*((1-b)+b*(avg_doclen))))
    return tabelaIDF
    #return bm25

