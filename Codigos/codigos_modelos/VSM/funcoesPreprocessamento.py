import glob, os, math, errno, re, fnmatch
from os.path import isfile
from re import sub
from collections import defaultdict
"""
    Módulo com funções que realizam o pré processamento e 
    e a substituição dos tokens no código
"""

def removeEMPTYLINES(s): #remove linhas vazias do código
    filtered = filter(lambda x: not re.match(r'^\s*$', x), s)
    frases = []
    for i in filtered:
        frases.append(i)
    return frases

def prePROCESSPY(texto): #remove comments and white spaces python
    texto = texto.replace(" ", " AB ")
    texto = sub('".*?"', '" "',texto)
    texto = sub("'.*?'", "''",texto)
    texto = re.sub(r'(\"{2,3}[\s\n]*)(?:.*?[\s\n]*)*([\n\s]*\"{2,3})', r'\1\2', 
                   texto, flags=re.MULTILINE)
    texto = re.sub(r'#.*', '#',texto)  #comments in python  
    return texto

def prePROCESSAM(texto): #remove comments and white spaces c, cpp, java
    texto = texto.replace(" ", " AB ")
    texto = sub('".*?"', '" "',texto)
    texto = sub("'.*?'", "''",texto)
    texto = re.sub(r'//.*', '//',texto)#comments in cpp
    return texto

def functionTOKENS(text):
    with open("tokensSYMBOLS.py") as f:
        for line in f:
            (symbol, token) = line.split()
            text = text.replace(symbol, " "+token+" ")
    text = text.lower() #mantém os tokens minúsculos
    text = text.split() #divide o code em palavras em lista
    return text

def functionTOKENS1(text):
    tableTOKENS = {}
    with open("tokensWORDS.py") as f:
        for line in f:
            (key, val) = line.split()
            tableTOKENS[key] = val
    for n, i in enumerate(text): #busca o token da palavra reservada
        for x, y in tableTOKENS.items():
            if i == x:
                text[n] = y
    listTOKENS = [value for value in text if value in tableTOKENS.values()]
    return listTOKENS