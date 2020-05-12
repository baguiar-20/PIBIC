
import re
import funcaoPreC as fpreC
import funcaoPrePy as fprePy
import BM25 as bm25
import timeit
from pathlib import Path
import os



docs_colecao = []
termos_colecao = []
tam_colecao = []
lists = []
score = []
tam_list = {}
tam_doc= {}
cont = 0
qtdDocs = 0

 
#processar os tokens antes para o pre processamento
tokensSym = fpreC.token("tokenSymbols.txt")


p = os.getcwd() + '/testePy/testesFakesPy'

with os.scandir(p) as arqs:
    for arq in arqs:
        if arq.name and arq.is_file():
            with open(arq.path, 'r') as codigo:
                codeTEXT = codigo.readlines()

                if arq.name.endswith('.c'):
                    texto = fpreC.removeSpaceC(codeTEXT)
                    texto = fpreC.tokensSimbols(codeTEXT, tokensSym)
                    texto = fpreC.tokensWordsC(codeTEXT)
                
                elif arq.name.endswith('.py'):
                    texto = fprePy.removeSpacePy(codeTEXT)
                    texto = fpreC.tokensSimbols(codeTEXT, tokensSym)
                    texto = fprePy.tokensWordsPy(codeTEXT)
    
                texto = fpreC.normaliza(codeTEXT)
                tam_list[qtdDocs] = len(texto)
                qtdDocs += 1
                texto = fpreC.calcNgram(texto, 4)
                termos = texto
                termos_colecao += termos
                docs_colecao = fpreC.insertTERMOS(arq.name, termos, lists)

docs_colecao = fpreC.emLista(docs_colecao)
avg_doclen = bm25.mediaDoc(tam_list, qtdDocs)
cont_termos = fpreC.preencheTERMOS(termos_colecao, lists)

idf = bm25.idf(qtdDocs, cont_termos)
idfota = bm25.idfOta(qtdDocs, cont_termos)
idfota2 = bm25.idfOta2(qtdDocs, cont_termos)

score = bm25.OkapiBM251(docs_colecao, cont_termos, avg_doclen, qtdDocs, idfota2)
print(score)





#print(idf)
#print()
#print(idfota)
#print()
#print(idfota2)
