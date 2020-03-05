import glob
import re
import funcaoPreC as fpre
import BM25 as bm25

# processar os tokens antes para o pre processamento

tokensSymC = fpre.token("tokenSymbolsC.txt")

docs_colecao = []
termos_colecao_c = []
list_c = []
cont_c = 0
tam_list_c = []
tam_doc= {}
tam_list = {}
cont = 0
i = 0
score = []
md = 0
# pre processamento
for file in glob.glob("/home/brendaum/Área de Trabalho/PIBIC/Codigos/codigos_modelos/documentos/*.txt"):
    print()
    print("Name of the file:", file)
    fp = open(file, "r", -1, 'utf-8')
    #contDocs += i 
    codeTEXT = fp.readlines()
    #print(codeTEXT)
    print()
    texto = fpre.removeSpace(codeTEXT)
    texto = fpre.tokensS(codeTEXT, tokensSymC)
    texto = fpre.tokensP(codeTEXT)
    texto = fpre.normaliza(codeTEXT)
    tam_doc = len(texto)
    tam_list[i] = len(texto)
    i += 1
    texto = fpre.calcNgram(texto, 4)
    #print()
    termos = texto
    termos_colecao_c += termos
    docs_colecao, tam_colecao = fpre.insertTERMOS(file, termos, list_c, tam_list_c, tam_doc)
    print()
for x in tam_list:
    md += tam_list[x]
md = md/i
cont_termos = fpre.preencheTERMOS(termos_colecao_c, list_c)


print()

print("Numero total de documentos: ", i)
print()
print("Tamanho de cada documento: ")
for i in tam_colecao:
    print(i)
print()
print("Media dos documentos(avg_doclen): ", md)
print()
print("Nº de documentos em q o termo ocorre na coleção", cont_termos)
print()

print("Numero de termo da consulta ocorre no documento: ")


score = bm25.calculaIDF(cont_termos,i,md )

print(score)