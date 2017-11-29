#ifndef BLOCK_H
#define BLOCK_H
#include <iostream>

using namespace std;

class Block
{
    public:
        Block();

        int Getindex() { return index; }
        void Setindex(int val) { index = val; }
        string Gettime() { return time; }
        void Settime(string val) { time = val; }
        string Getdata() { return data; }
        void Setdata(string val) { data = val; }
        string Gethash() { return currentHash; }
        void Sethash(string val) { currentHash = val; }
        string GetpreviousHash() { return previousHash; }
        void SetpreviousHash(string val) { previousHash = val; }

        void calculateHash(); //calculate a hash value for current block

    private:
        int index;
        string time;
        string data;
        string currentHash;
        string previousHash;
};

bool validPrevIndex(Block previousBlock, Block currentBlock);   //verifies that current block has a valid index according to previous block
bool validPrevHash(Block previousBlock, Block currentBlock);    //verifies that current block has a valid hash according to previous block

#endif // BLOCK_H
