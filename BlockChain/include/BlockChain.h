#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include "Block.h"
#include <vector>

class BlockChain
{
    public:
        BlockChain();
        vector<Block> GetChain() {return fullChain;}

        Block getLatestBlock(); //returns the latest block in list
        void generateNextBlock(string newData); //takes data is input and create new block based on it
        void printChain();

    protected:

    private:
        vector<Block> fullChain;
};

Block generateOriginalBlock();  //Always first block in chain
#endif // BLOCKCHAIN_H
