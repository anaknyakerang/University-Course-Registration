#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;
typedef struct ElmMataKuliah *adrMatkul;
typedef ElmMhs *adrMhs;

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

struct MataKuliah{
    string nama_mk;
    string kode_mk; 
    string dosen_pengampu;
    string kelas;
    string ruang;
    string jadwal;
    int sks;
};

struct ElmMataKuliah{
    MataKuliah info;
    adrMatkul* next;
    adrMatkul* prev;
};

struct ListMahasiswa {
    adrMhs first;
}; 
void createListMahasiswa(ListMahasiswa &L);
adrMhs alokasiMahasiswa(string nim, string nama, string jurusan);
void insertLastMahasiswa(ListMahasiswa &L, adrMhs P);
void showAllMahasiswa(ListMahasiswa L);
adrMhs searchMahasiswa(ListMahasiswa L, string nim);
void deleteMahasiswa(ListMahasiswa &L, string nim);
#endif