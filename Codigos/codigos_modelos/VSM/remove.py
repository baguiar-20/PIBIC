import glob, os, math, errno, re
import fnmatch
from os.path import isfile

def imprimeLIST(listas): #imprime listas
    for i in listas:
        print(i)
        print()

def imprimeDICT(dictionaries): #imprime dictionary
    for i, j in dictionaries.items():
        print(i, "->", j)
        print()

def contARCHIVES(name): #contador de arquivos
    cont = 0
    for file in os.listdir('.'):
        if fnmatch.fnmatch(file, '*.'+name):
            cont += 1
    return cont

def preencheTABLE(): #Preenche tabela do arquivo na pasta
    tabela = {}
    with open("tokensWORDS.txt") as f:
        for line in f:
            (key, val) = line.split()
            tabela[key] = val

def removeREPEATED(vocaburepetido): #remove elementos repetidos de listas
    final_vocabu = [] 
    for num in vocaburepetido: 
        if num not in final_vocabu: 
            final_vocabu.append(num) 
    return final_vocabu