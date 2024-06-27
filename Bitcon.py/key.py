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
    
# ������ ������������� CacheWallet
wallet = CacheWallet()
wallet.get_balance()  # ����� ���������� ������� (0)
wallet.deposit(100)   # ������� 100 ������
wallet.get_balance()  # ����� ������� ����� �������� (100)
wallet.withdraw(50)   # ������ 50 ������
wallet.get_balance()  # ����� ������� ����� ������ (50)
wallet.withdraw(100)  # ������� ����� ������, ��� ���� �� ������� (��������� �� ������)
wallet.get_balance()  # ����� ������� ����� ��������� ������� ������ (50)