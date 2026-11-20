#include "mahasiswa.h"
void createListMahasiswa(ListMahasiswa &L){
    L.first = nullptr;
}

adrMhs alokasiMahasiswa(string nim, string nama, string jurusan){
    adrMhs P = new ElmMhs;
    P->info.nim = nim;
    P->info.nama = nama;
    P->info.jurusan = jurusan;
    P->nextMatkul = nullptr;
    P->firstMatkul = nullptr;
    return P;
}
void insertLastMahasiswa(ListMahasiswa &L, adrMhs P);
void showAllMahasiswa(ListMahasiswa L);
adrMhs searchMahasiswa(ListMahasiswa L, string nim);
void deleteMahasiswa(ListMahasiswa &L, string nim);