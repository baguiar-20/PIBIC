#------MAIN-----
import glob, os, math, errno, re, fnmatch, pathlib
#import functionsBasics, functionVariables, functionsPreProcessing, functionsVectorial
import funcoesPreprocessamento
import funcoesVariaveis
import remove
import VSM

from os.path import isfile
from re import sub
from collections import defaultdict

'''from functionsBasics import *  
from functionVariables import *
from functionsPreProcessing import *
from functionsVectorial import *
'''

for file in glob.glob("*.txt"):
    print()
    print("Name of the file:", file)
    fp = open(file, "r", -1, 'utf-8')
    codeTEXT = fp.readlines()
    print(codeTEXT)
    texto = removeEMPTYLINES(codeTEXT)
    stringTEXT = "".join(str(x) for x in texto)
    stringTEXT = prePROCESSPY(stringTEXT)
    stringTEXT = functionTOKENS(stringTEXT)
    stringTEXT = functionTOKENS1(stringTEXT)
    vocabulario_python += stringTEXT
    stringTEXT = calcNgram(stringTEXT, 4)
    termos = stringTEXT
    termos_colecao_py += termos
    insertTERMOS(file, termos, list_py)
print()
vocabulario_python = removeREPEATED(vocabulario_python)
termos_colecao_py = removeREPEATED(termos_colecao_py)
cont_termos = preencheTERMOS(termos_colecao_py, list_py)
idf_colection_py = calculaIDF(cont_termos, cont_py)
imprimeLIST(list_py)
termsFrequency(list_py,idf_colection_py)
fp.close()
