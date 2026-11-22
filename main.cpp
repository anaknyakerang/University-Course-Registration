#include mahasiswa.h

int main(){
    ListMahasiswa L; 
    createListMahasiswa(L); 

    int pilih = -1;
    string nim, nama, jurusan;
    string nama_mk, kode_mk, dosen_pengampu; 
    string kelas, ruang, jadwa;
    int sks; 
    bool berhenti = false;

    adrMhs p;
    
    while (pilih != 0 && !berhenti){
        cout << "\n========================================\n";
        cout << "   UNIVERSITY COURSE REGISTARATION SYSTEM\n";
        cout << "========================================\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Tampilkan Semua Mahasiswa\n";
        cout << "3. Cari Mahasiwa\n";
        cout << "4. Tambah Mata Kuliah\n";
        cout << "5. Hapus Mata Kuliah\n";
        cout << "6. Tampilkan Mata Kuliah Mahasiswa\n";
        cout << "7. Hapus Mahasiswa\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        cout << endl;
        if (pilih == 0) {
            cout << "Terima kasih telah mencoba!\nSemoga sukses semuanya!\n\n";
            cout << "+-----------------------------------------+" << endl;
            cout << "|              Created By                 |" << endl;
            cout << "|-----------------------------------------|" << endl;
            cout << "| Kayla Sabrina Rayghita                  |" << endl;
            cout << "| NIM : 103012500085                      |" << endl;
            cout << "|                                         |" << endl;
            cout << "| Mirza Zulfadhli Amin                    |" << endl;
            cout << "| NIM : 103012500093                      |" << endl;
            cout << "|                                         |" << endl;
            cout << "| Mutiara Putri Syifani                   |" << endl;
            cout << "| NIM : 103012530051                      |" << endl;
            cout << "|_________________________________________|" << endl;

            berhenti = true;
            break;
        }
    }

    return 0;
}