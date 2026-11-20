#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;
struct infotypeMhs{
    string nim;
    string nama;
    string jurusan;
};
struct ElmMhs{
    infotypeMhs info;
    ElmMhs* next;
    adrMatkul firstMatkul;
};

typedef ElmMhs* adrMhs;

struct ListMahasiswa {
    adrMhs first;
}; 

#endif