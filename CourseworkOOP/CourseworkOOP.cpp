﻿#include <iostream>
#include "BRBTree.h"

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian_Russia.1251");

    BRBTree<int> tree;
    tree.insert(8);
    tree.insert(6);
    tree.insert(7);
    tree.print();

    system("pause");
}