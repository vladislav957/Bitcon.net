class CacheWallet:
    def init(self):
        self.balance = 0
    
    def deposit(self, amount):
        self.balance += amount
   
    def withdraw(self, amount): 
        if amount <= self.balance:
            self.balance -= amount
        else:
            print("Not enough funds in the wallet")
        
    def get_balance(self):
        print(self.balance)
    
# Пример использования CacheWallet
wallet = CacheWallet()
wallet.get_balance()  # Вывод начального баланса (0)
wallet.deposit(100)   # Депозит 100 единиц
wallet.get_balance()  # Вывод баланса после депозита (100)
wallet.withdraw(50)   # Снятие 50 единиц
wallet.get_balance()  # Вывод баланса после снятия (50)
wallet.withdraw(100)  # Попытка снять больше, чем есть на балансе (сообщение об ошибке)
wallet.get_balance()  # Вывод баланса после неудачной попытки снятия (50)