#include "mahasiswa.h"

// mahasiswa 

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

adrMhs searchMahasiswa(ListMahasiswa L, string nim){

}

void insertLastMahasiswa(ListMahasiswa &L, adrMhs P){

}

void showAllMahasiswa(ListMahasiswa L){

}
void deleteMahasiswa(ListMahasiswa &L, string nim){

}
//================================
//mata kuliah terkeren
//================================
bool isEmptyMataKuliah(adrMhs p){
    return (p->firstMatkul == nullptr);
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
void addMatkul(adrMhs &p, adrMatkul q){
    if(p->firstMatkul == NULL){
        p->firstMatkul = q;
    }else{
        if(findMatkulByKode(p,q->info.kode_mk) != NULL){
            cout << "Mata kuliah dengan kode " << q->info.kode_mk << " sudah ada cik." << endl;
            return;

        }
        if(countSKS(p) + q->info.sks > 24){
            cout << "Total SKS melebihi batas maksimal 24 SKS." << endl;
            return;
        }
        adrMatkul temp = p->firstMatkul;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = q;
        q->prev = temp;
    }
}

int countSKS(adrMhs p){
    int totalSKS = 0;
    adrMatkul temp = p->firstMatkul;
    while(temp != NULL){
        totalSKS += temp->info.sks;
        temp = temp->next;
    }
    return totalSKS;
}

adrMatkul findMatkulByKode(adrMhs p,string kode_mk){
    p = p->firstMatkul;
    while (p != NULL) {
        if (p->info.kode_mk == kode_mk) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void ShowMatkul(adrMhs p){
    if(p == nullptr){
        cout << "Mahasiswa tidak ditemukan." << endl;
    }else if (p->firstMatkul == nullptr){
        cout << "Tidak ada mata kuliah yang diambil." << endl;
    }else{
        adrMatkul temp = p->firstMatkul;

        while(temp != nullptr){
            cout << "Nama Mata Kuliah: " << temp->info.nama_mk << endl;
            cout << "Kode Mata Kuliah: " << temp->info.kode_mk << endl;
            cout << "Dosen Pengampu: " << temp->info.dosen_pengampu << endl;
            cout << "Kelas: " << temp->info.kelas << endl;
            cout << "Ruang: " << temp->info.ruang << endl;
            cout << "Jadwal: " << temp->info.jadwal << endl;
            cout << "SKS: " << temp->info.sks << endl;
            cout << endl;
            
            temp = temp->next;
        }
    }
}

void deleteMatkulByKode(adrMhs p, string kode_mk){
    
}


void deleteAllMatkul(adrMhs p){
    adrMatkul temp = p->firstMatkul;
    while(temp != nullptr){
        adrMatkul toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }
    p->firstMatkul = nullptr;
}

