#include <iostream>
#include "Block.h"
#include "BlockChain.h"

using namespace std;

int main()
{
    BlockChain chain;

    chain.generateNextBlock("This is a test");
    chain.generateNextBlock("This is test 2");

    chain.printChain();
    return 0;
}
