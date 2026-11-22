#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>
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
//mahasiswa
void createListMahasiswa(ListMahasiswa &L);
adrMhs alokasiMahasiswa(string nim, string nama, string jurusan);
void insertLastMahasiswa(ListMahasiswa &L, adrMhs P);
void showAllMahasiswa(ListMahasiswa L);
adrMhs searchMahasiswa(ListMahasiswa L, string nim);
void deleteMahasiswa(ListMahasiswa &L, string nim);

//matkul 
adrMatkul addElmMatakuliah(string nama_mk, string kode_mk, string dosen_pengampu, string kelas, string ruang, string jadwal, int sks);
void addMatkul(adrMhs p, adrMatkul q);
adrMatkul searchMatkulByKode(adrMhs p,string kode_mk);
void showMatkul(adrMhs p);
void deleteMatkulByKode(adrMhs p, string kode_mk);
#endif