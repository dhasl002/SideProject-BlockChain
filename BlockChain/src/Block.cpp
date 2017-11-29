#include "Block.h"
#include "sha256.h"

Block::Block()
{
    int index = -1;
    string time = "";
    string data = "";
    string currentHash = "";
    string previousHash = "";
}

//calculate a hash value for current block
void Block::calculateHash()
{
    currentHash = sha256(previousHash);
}

//verifies that current block has a valid index according to previous block
bool validPrevIndex(Block previousBlock, Block currentBlock)
{
    if(previousBlock.Getindex() == currentBlock.Getindex()-1)
        return true;
    else
        return false;
}

//verifies that current block has a valid hash according to previous block
bool validPrevHash(Block previousBlock, Block currentBlock)
{
    if(previousBlock.Gethash() == currentBlock.GetpreviousHash())
        return true;
    else
        return false;
}
