
#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include "mahasiswa.h"

// Pointer BST
struct ElmBST;
typedef ElmBST* adrBST;

// Elemen BST
struct ElmBST {
    infotypeMhs info;
    adrBST left;
    adrBST right;
};

// Fungsi dasar BST
adrBST createBST();
adrBST alokasiBST(infotypeMhs data);
adrBST insertBST(adrBST root, infotypeMhs data);
adrBST searchBST(adrBST root, string nim);
adrBST findMinBST(adrBST root);
adrBST deleteBST(adrBST root, string nim);

// Traversal BST
void inorderBST(adrBST root);
void preorderBST(adrBST root);
void postorderBST(adrBST root);

#endif
