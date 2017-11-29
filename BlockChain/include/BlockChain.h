#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H


class BlockChain
{
    public:
        BlockChain();

        int Getindex() { return index; }
        void Setindex(int val) { index = val; }
        string GetprevHash() { return prevHash; }
        void SetprevHash(string val) { prevHash = val; }
        timestamp Gettime() { return time; }
        void Settime(timestamp val) { time = val; }

    protected:

    private:
        int index;
        string prevHash;
        timestamp time;
};

#endif // BLOCKCHAIN_H
