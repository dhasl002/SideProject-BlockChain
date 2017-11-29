#ifndef BLOCK_H
#define BLOCK_H


class Block
{
    public:
        Block();

        int Getindex() { return index; }
        void Setindex(int val) { index = val; }
        timeStamp Gettime() { return time; }
        void Settime(timeStamp val) { time = val; }
        string Getdata() { return data; }
        void Setdata(string val) { data = val; }
        string Gethash() { return hash; }
        void Sethash(string val) { hash = val; }
        string GetpreviousHash() { return previousHash; }
        void SetpreviousHash(string val) { previousHash = val; }

    protected:

    private:
        int index;
        timeStamp time;
        string data;
        string hash;
        string previousHash;
};

string calculateHash(); //calculate a hash value for current block
bool validPrevIndex(Block previousBlock, Block currentBlock);   //verifies that current block has a valid index according to previous block
bool validPrevHash(Block previousBlock, Block currentBlock);    //verifies that current block has a valid hash according to previous block

#endif // BLOCK_H
