import numpy as np
import math as mt
import glob
import re

# ainda falta testar 

def calculaIDF(cont_termos, cont_c, media_doc, b= 0.75, K1 =1): #Frequência Inversa do Docmentos
    tabelaIDF = {}
    #bm25 = {}
    docCont = cont_c
    #avg_doclen = media_doc
    for i,j in cont_termos.items():
        tabelaIDF[i] = mt.log((docCont-j+0.5)/j+0.5)
        #bm25[i] = tabelaIDF[i] * ((j*(K1+1))/(j + K1*((1-b)+b*(avg_doclen))))
    return tabelaIDF
    #return bm25

