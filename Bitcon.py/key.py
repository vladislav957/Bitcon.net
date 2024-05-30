
from typing import Self
from xml.dom.pulldom import default_bufsize


class CacheWallet:
    def_init_(Self):
    Self.balance = 0
    
def deposit(self,amount):
   self.balance += amount
   
def withdraw(self,amount): 
    if amount <= self.balance:
        self.balance -= amount
    else:
        print("Not enough fuds in the wallet")
        
def get_balance(self):
    print self.balance
    
#bc1q577ve2l046vvjpkwexgf8h4fwrza67w64wp4gz
wallet = CacheWallet()
print(wallet.get_balance()) # 