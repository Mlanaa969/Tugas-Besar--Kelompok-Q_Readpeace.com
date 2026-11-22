#ifndef LAPORANBST_H
#define LAPORANBST_H

#include <iostream>
#include <string>
#include <cstdlib>   
using namespace std;


struct Laporan {
    int idLaporan;         
    string idPenugasan;       
    string tanggalLaporan;
    string deskripsiAktivitas;
    int jamAktual;
    string hasilKegiatan;
    string statusLaporan;
};

typedef Laporan infotype;
typedef struct elemenNode *address;

struct elemenNode {
    infotype info;
    address left;
    address right;
};

struct bst {
    address root;
};



void createBST(bst &T);
/* I.S. T sembarang
   F.S. terbentuk BST kosong (T.root = NULL) */


address createNode(infotype x);
/* I.S. info x terdefinisi
   F.S. mengembalikan alamat node berisi x dengan anak kiri dan kanan NULL */


void insertNode(address &root, infotype x);
/* I.S. root mungkin kosong, x terdefinisi
   F.S. x tersisip pada posisi yang sesuai urutan BST berdasarkan idLaporan;
        jika key sudah ada maka tidak ada perubahan pada BST */


void deleteNode(address &root, int key);
/* I.S. root mungkin kosong, key terdefinisi
   F.S. node dengan idLaporan = key dihapus dan BST tetap terurut;
        jika key tidak ada maka tidak ada perubahan pada BST */


address findNode(address root, int key);
/* I.S. root mungkin kosong, key terdefinisi
   F.S. mengembalikan alamat node dengan idLaporan = key,
        atau NULL jika tidak ditemukan */



void printLaporan(infotype x);
/* I.S. info x terdefinisi
   F.S. seluruh isi laporan x tertampil di layar */


void inOrder(address root);
/* I.S. root mungkin kosong
   F.S. seluruh node tertampil dengan urutan kiri, akar, kanan
        (terurut menaik berdasarkan idLaporan) */

// traversal pre-order
void preOrder(address root);
/* I.S. root mungkin kosong
   F.S. seluruh node tertampil dengan urutan akar, kiri, kanan */


void postOrder(address root);
/* I.S. root mungkin kosong
   F.S. seluruh node tertampil dengan urutan kiri, kanan, akar */



address minNode(address root);
/* I.S. root mungkin kosong
   F.S. mengembalikan alamat node dengan key terkecil (paling kiri),
        atau NULL jika BST kosong */


address maxNode(address root);
/* I.S. root mungkin kosong
   F.S. mengembalikan alamat node dengan key terbesar (paling kanan),
        atau NULL jika BST kosong */


int heightTree(address root);
/* I.S. root mungkin kosong
   F.S. mengembalikan jumlah level pohon;
        BST kosong bernilai 0 dan BST satu node bernilai 1 */


int countNode(address root);
/* I.S. root mungkin kosong
   F.S. mengembalikan banyaknya node pada BST (0 jika kosong) */



int generateIdLaporan(bst T);
/* I.S. T terdefinisi, srand() sudah dipanggil pada program utama
   F.S. mengembalikan bilangan acak 4 digit (1000-9999)
        yang belum dipakai sebagai key pada T */


void insertBST(bst &T, infotype x);
/* I.S. T terdefinisi, x terdefinisi
   F.S. x tersisip ke T melalui insertNode */


void isiDummyBST(bst &T);
/* I.S. T terdefinisi dan kosong
   F.S. T berisi 10 node laporan dummy dengan key acak unik
        (idPenugasan PGS001 - PGS010 sesuai data dummy MLL) */

#endif
