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

adrMatkul addElmMatakuliah(string nama_mk, string kode_mk, string dosen_pengampu, string kelas, string ruang, string jadwal, int sks){
    adrMatkul p = new ElmMataKuliah;
    p->info.nama_mk = nama_mk;
    p->info.kode_mk = kode_mk;
    p->info.dosen_pengampu = dosen_pengampu;
    p->info.kelas = kelas;
    p->info.ruang = ruang;
    p->info.jadwal = jadwal;
    p->info.sks = sks;
    return p;
}

adrMhs searchMahasiswa(ListMahasiswa L, string nim);


adrMatkul searchMatkulByKode(adrMhs p,string kode_mk){
    p = p->firstMatkul;
    while (p != NULL) {
        if (p->info.kode_mk == kode_mk) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void insertLastMahasiswa(ListMahasiswa &L, adrMhs P);

void addMatkul(adrMhs &p, adrMatkul q){
    if(p->firstMatkul == NULL){
        p->firstMatkul = q;
    }else{
        adrMatkul temp = p->firstMatkul;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = q;
        q->prev = temp;
    }
}

void ShowMatkul(adrMhs p){
    if(p->firstMatkul == NULL){
        cout << "Tidak ada mata kuliah yang diambil." << endl;
    }else{
        adrMatkul temp = p->firstMatkul;
        while(temp != NULL){
            cout << "Nama Mata Kuliah: " << temp->info.nama_mk << endl;
            cout << "Kode Mata Kuliah: " << temp->info.kode_mk << endl;
            cout << "Dosen Pengampu: " << temp->info.dosen_pengampu << endl;
            cout << "Kelas: " << temp->info.kelas << endl;
            cout << "Ruang: " << temp->info.ruang << endl;
            cout << "Jadwal: " << temp->info.jadwal << endl;
            cout << "SKS: " << temp->info.sks << endl;
            cout << endl;
            q->next = nullptr;
            q->prev = nullptr;
            temp = temp->next;
        }
    }
}
void showAllMahasiswa(ListMahasiswa L);
void deleteMahasiswa(ListMahasiswa &L, string nim);

void deleteMatkulByKode(){

}
