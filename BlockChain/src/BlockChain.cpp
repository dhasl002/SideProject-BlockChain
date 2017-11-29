#include "BlockChain.h"
#include "Block.h"
#include "sha256.h"
#include <time.h>
#include <stdio.h>
#include <sstream>
#include <iostream>


using namespace std;

//when blockchain is created, create first block in chain
BlockChain::BlockChain()
{
    fullChain.push_back(generateOriginalBlock());
}

//returns the latest block in list
Block BlockChain::getLatestBlock()
{
    return fullChain[fullChain.size()-1];
}

//takes data is input and create new block based on it
void BlockChain::generateNextBlock(string newData)
{
    Block b;

    b.Setdata(newData);
    b.Setindex(fullChain[fullChain.size()-1].Getindex()+1);
    b.SetpreviousHash(fullChain[fullChain.size()-1].Gethash());
    b.calculateHash();

    time_t timer;
    time(&timer);
    stringstream ss;
    ss << timer;
    string str = ss.str();
    b.Settime(str);

    fullChain.push_back(b);
}

//Always first block in chain
Block generateOriginalBlock()
{
    Block b;
    b.Setdata("first Block");
    b.Setindex(0);
    b.SetpreviousHash("0");
    b.calculateHash();

    time_t timer;
    time(&timer);
    stringstream ss;
    ss << timer;
    string str = ss.str();
    b.Settime(str);

    return b;
}

void BlockChain::printChain()
{
    for(int i = 0; i < fullChain.size(); i++)
    {
        cout << "Index: " << fullChain[i].Getindex() << endl;
        cout << "Hash: " << fullChain[i].Gethash() << endl;
        cout << "Previous Hash: " << fullChain[i].GetpreviousHash() << endl;
        cout << "Time: " << fullChain[i].Gettime() << endl;
        cout << "Data: " << fullChain[i].Getdata() << "\n\n" << endl;
    }
}








