#include <iostream>
#include <vector>

class ProofOfWork {
public:
    int proof = 0;

    bool valid_proof(int last_proof, int proof) {
        // Предположим, здесь реализация проверки proof-of-work
        return (last_proof + proof) % 100 == 0;
    }

    int find_proof(int last_proof) {
        proof = 0;
        while (!valid_proof(last_proof, proof)) {
            proof++;
        }
        return proof;
    }
};

class Block {
public:
    int value;

    Block(int val) : value(val) {}
};

class BlockSystem {
public:
    std::vector<Block> blocks;

    void addBlock(int val) {
        Block newBlock(val);
        blocks.push_back(newBlock);
    }

    void printBlocks() {
        for (Block block : blocks) {
            std::cout << block.value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    BlockSystem system;

    system.addBlock(1);
    system.addBlock(2);
    system.addBlock(3);

    ProofOfWork pow;
    int proof = pow.find_proof(12345);
    system.addBlock(proof);

    system.printBlocks();

    return 0;
}
