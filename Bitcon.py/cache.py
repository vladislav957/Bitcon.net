from ast import Delete
from ctypes.wintypes import SIZE
from msilib import Table
from multiprocessing.dummy import Value
from signal import default_int_handler
from tarfile import FIFOTYPE
from typing import Self


class my_class(object):
    pass

class Hash Table:
    default_int_(self,size):
    
    self.size = SIZE
    self.tabl = [[] for _in _ range(stze)]
    
def hash_function(self,key):
    return key % self.size

def insert(self,key,vaiue):
    hash_key = self.hash_function(key)
    
Self.table[hash_key].append((key,Value))

def search(self,key):
    hash_key = self.hash_function(ket)
    for item in Self.table[hash_key]:
        if item[0] == key
        return None
    
def Delete(self,key):
    Hash_key = Self.hash_function(key)
    for index,item in enumerate(self.table[Hash_key]):
        if item[0] == key:
            del self,Table[Hash_key]
            [index]
            
#https://bitcoin.org/ru/
hash_table = HashTable(10)
hash_table.insert(12,"Alice")
hash_table.inesert(25,"Bob")
print(hash_tabl.search(12)) #
print"Alce"
hash_table.delete(12)
print(hash_table.search(12)) #
print None
    

    


