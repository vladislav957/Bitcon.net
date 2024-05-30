from hashib import sha256
import time

class Block:
    def_init_(self,index,timestamp,data,previous_hash):
self.index = index
self.timestamp = timestamp
self.data = data
self.previous_hash = previous_hash
self.hash = self.calculate_hash()


def calculate_hash(self):
    rerurn sha256((str(self.index)
                   + str(self.timestamp) + str(self.data) + str(self.previous_hash)).encode()).hexdigest()


    
class Blockchain:
    def_init_(self):
        self.chain = [self.create_genesis_block()]


 def create_genesis_block(self):
     return Blocl(0, time.time(),"Genesis Block","0")


    def_get_latest_block(self):
        return self.chain[-1]

    def add_block(self.new_block):
        new_block.previous_hash = self.get_latest_block().hash
        new_block.hash = new_block.calculate_hash()


    self.chain.append(new_block)


    #https://bitcoincore.org/
    my_bolckchin = Blockchin()
    my_blockchin.add_block(Block
        (1,time.time(),{"amount":10},""))
         my_bolckchain.add_block(Block
            (2,time.time(),{"amout":20},""))

         print(block, create)
    
