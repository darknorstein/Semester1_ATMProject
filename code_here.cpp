// code by DarkNorstein

#include "stdafx.h"
#include <Windows.h>

void main()
{
	int menu,menu1, ambil, bhs, pin, upin = 0, saldo = 4700000, pil_trans;
	int valid_num = 1, cek, pil;
	int cek_bayar, n_listrik, b_listrik, saldo_l, cek_stsal;
	int saldo_t, b_telpon, n_telepon;
	int saldo_a, b_air, n_air;
	int ubahpin, pinbar, pinbar1,pinbar11, pil_trans1, ntf, tsaldo;
	long int tf;


	printf("Masukkan Kartu anda lalu tekan enter\n");   
	Beep(532, 200); Beep(102, 200); Beep(400, 100);
	system("pause");
	system("cls"); goto bahasa; 
bahasa:
	printf("SILAHKAN PILIH BAHASA / CHOOSE YOUR LANGUAGE  \n");
	printf("[1] BAHASA INDONESIA \n");
	printf("[2] ENGLISH          \n");
	printf("TEKAN 1 UNTUK BAHASA INDONESIA DAN TEKAN 2 UNTUK ENGLISH \n"); scanf_s("%d", &bhs);
	if (bhs == 1) { goto upin_ind; }
	else if (bhs == 2) { goto upin_eng; }
	else{
		printf("MAAF LAYANAN TIDAK TERSEDIA\n"); goto bahasa;
	}
	system("pause");

// BAHASA INDONESIA
upin_ind:
	system("cls");
	if (upin < 3) {
		printf("\t   SILAHKAN MASUKKAN NOMOR PIN ANDA \n ");
		scanf_s("%d", &pin);
		if (pin == 919191){
			goto awal; system("cls");
		}
		else {
			printf("\t  MAAF PIN YANG ANDA MASUKKAN SALAH \n");
			printf("\t      SILAHKAN MASUKKAN KEMBALI     \n");
			upin++;
			Sleep(2500); goto upin_ind;
		}
	}
	else {
		printf("\n  ANDA TELAH SALAH MEMASUKKAN PIN SEBANYAK 3 KALI   \n");
		printf("\t          MOHON MAAF AKUN ANDA TERBLOKIR            \n"); Beep(1800, 2800);
		Sleep(4500);
		_exit(2000);
	}

awal:
	system("cls");
	printf("\t -----------------------MENU AWAL------------------------\n");
	printf("\t |                PECAHAN UANG Rp 50.000                 | \n");
	printf("\t ````````````````````````````````````````````````````````` \n");
	printf("\n[1]<---100.000                      500.000----------------->[2]");
	printf("\n[3]<---300.000                      1.000.000--------------->[4]");
	printf("\n[5]<---PEMBAYARAN                   PENARIKAN JUMLAH LAIN--->[6]");
	printf("\n[7]<---TRANSAKSI LAINNYA            KELUAR------------------>[8]\n");
	printf("SILAHKAN PILIH LALU TEKAN ENTER");
	printf(": "); scanf_s("%d", &menu);

	if (menu == 1) {
		saldo = saldo - 100000;
		system("cls");
		printf("\nSILAHKAN AMBIL UANG ANDA"); Sleep(1500);
		system("cls");
		printf("\nSILAHKAN AMBIL RESI ANDA"); Sleep(2000);
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  TERMINAL   : 34LD989                         \n");
		printf("\t  NAMA	     : NUR MUHAMMAD ILHAM             \n");
		printf("\t  PENARIKAN  : Rp 100.000                        \n");
		printf("\t  SALDO      : Rp %d                      \n", saldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(6000);
	}
	else if (menu == 2) {
		saldo = saldo - 500000;
		system("cls");
		printf("\nSILAHKAN AMBIL UANG ANDA"); Sleep(1500);
		system("cls");
		printf("\nSILAHKAN AMBIL RESI ANDA"); Sleep(2000);
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  TERMINAL   : 34LD989                         \n");
		printf("\t  NAMA	     : NUR MUHAMMAD ILHAM             \n");
		printf("\t  PENARIKAN  : Rp 500.000                        \n");
		printf("\t  SALDO      : Rp %d                      \n", saldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(6000);
	}
	else if (menu == 3) {
		saldo = saldo - 300000;
		system("cls");
		printf("\nSILAHKAN AMBIL UANG ANDA"); Sleep(1500);
		system("cls");
		printf("\nSILAHKAN AMBIL RESI ANDA"); Sleep(2000);
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  TERMINAL   : 34LD989                         \n");
		printf("\t  NAMA	     : NUR MUHAMMAD ILHAM             \n");
		printf("\t  PENARIKAN  : Rp 300.000                        \n");
		printf("\t  SALDO      : Rp %d                      \n", saldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(6000);
	}
	else if (menu == 4) {
		saldo = saldo - 1000000;
		system("cls");
		printf("\nSILAHKAN AMBIL UANG ANDA"); Sleep(1500);
		system("cls");
		printf("\nSILAHKAN AMBIL RESI ANDA"); Sleep(2000);
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  TERMINAL   : 34LD989                         \n");
		printf("\t  NAMA	     : NUR MUHAMMAD ILHAM             \n");
		printf("\t  PENARIKAN  : Rp 1.000.000                       \n");
		printf("\t  SALDO      : Rp %d                      \n", saldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(6000);
	}
	else if (menu == 5){
		goto pembayaran;
	}
	else if (menu == 6){
		goto tarik_lain;
	}
	else if (menu == 7){
		goto transaksi;

	}
	else if (menu == 8){
		system("cls");
		printf("TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI\n");
		system("pause"); _exit(0);

	}
	else{
		system("cls");
		printf("MOHON MAAF LAYANAN TIDAK TERSEDIA"); _exit(800);
	}



tarik_lain:
	system("cls");
	printf("\t                   MASUKKAN JUMLAH PENARIKAN                       \n");
	printf("\t   DALAM KELIPATAN Rp50000 MAKSIMUM 1 KALI PENARIKAN Rp1250000     \n");
	printf("\t : Rp "); scanf_s("%d", &ambil);
	goto tarik;

tarik:
	system("cls");
	printf("PERMINTAAN ANDA SEDANG KAMI PROSES");
	if (saldo < ambil) {
		printf("\t MAAF SALDO ANDA TIDAK MENCUKUPI      \n");
		printf("\t SALDO ANDA SAAT INI ADALAH Rp %d", saldo);
		goto awal;
	}
	else {
		saldo = saldo - ambil;
		Sleep(1000); system("cls");
		cek = ambil % 50000;
	}
	if (cek != 0 || ambil > 1250000) {
		printf("MAAF, MOHON MASUKKAN DALAM KELIPATAN Rp50000\n");
		printf("\t        DAN MAKSIMAL Rp1250000\n           ");
		Sleep(3000); goto tarik_lain;
	}
	else {
		printf("\t PERMINTAAN TELAH DIPROSES\n");
		printf("\t SILAHKAN AMBIL UANG ANDA \n");
		Sleep(2000);
		printf("PILIH [1] UNTUK CEK RESI");
		printf("PILIH [2] UNTUK KELUAR."); scanf_s("%d", &pil);
		switch (pil) {
		case '1': goto cek_resi; break;
		case '2': _exit(2000);
		}
	}
cek_resi:
	system("cls");
	printf("\t  ___________________________________________  \n");
	printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
	printf("\t  ```````````````````````````````````````````  \n");
	printf("\t  TERMINAL   : 34LD989                         \n");
	printf("\t  NAMA	     : NUR MUHAMMAD ILHAM              \n");
	printf("\t  PENARIKAN  : Rp %d                        \n", ambil);
	printf("\t  SALDO      : Rp %d                      \n", saldo);
	printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
	printf("\t                 INFO 10101                    \n");
	system("pause"); _exit(6000);

pembayaran:
	system("cls");
	printf("\t  PILIH PEMBAYARAN YANG ANDA INGINKAN\n");
	printf("\t  [1] LISTRIK/PLN \n");
	printf("\t  [2] TELEPON     \n");
	printf("\t  [3] AIR         \n");
	printf("\t  [0] KEMBALI     \n");
	printf("SILAHKAN MASUKKAN PILIHAN ANDA : "); scanf_s("%d", &cek_bayar);

	if (cek_bayar == 1){
		system("cls");
		printf("MASUKKAN NOMOR PELANGGAN ANDA (6 DIGIT): "); scanf_s("%d", &n_listrik);
		printf("MASUKKAN NOMINAL PEMBAYARAN            : "); scanf_s("%d", &b_listrik);
		if (saldo < b_listrik) {
			system("cls");
			printf("\t MAAF SALDO ANDA TIDAK MENCUKUPI      \n");
			printf("\t SALDO ANDA SAAT INI ADALAH Rp %d\n", saldo);
			system("pause"); goto pembayaran;
		}
		else { goto lanjut_listrik; }
	lanjut_listrik:
		system("cls");
		printf("SEDANG MEMPROSES PEMBAYARAN");
		Sleep(4500);
		system("cls");
		printf("PEMBAYARAN ANDA TELAH BERHASIL");
		Sleep(1500);
		system("cls");
		saldo_l = saldo - b_listrik;
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  PEMBAYARAN LISTRIK BERHASIL                  \n");
		printf("\t  TERMINAL        : 34LD989                    \n");
		printf("\t  NOMOR PELANGGAN : %d\n", n_listrik);
		printf("\t  NOMINAL         : Rp %d\n", b_listrik);
		printf("\t  SALDO           : Rp %d\n", saldo_l);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(2000);
	}
	else if (cek_bayar == 2){
		system("cls");
		printf("MASUKKAN NOMOR TELEPON ANDA          :(+62) "); scanf_s("%d", &n_telepon);
		printf("MASUKKAN NOMINAL PEMBAYARAN          : "); scanf_s("%d", &b_telpon);
		if (saldo < b_telpon) {
			system("cls");
			printf("\t MAAF SALDO ANDA TIDAK MENCUKUPI      \n");
			printf("\t SALDO ANDA SAAT INI ADALAH Rp %d\n", saldo);
			system("pause"); goto pembayaran;
		}
		else { goto lanjut_telpon; }
	lanjut_telpon:
		system("cls");
		printf("SEDANG MEMPROSES PEMBAYARAN");
		Sleep(4500);
		system("cls");
		printf("PEMBAYARAN ANDA TELAH BERHASIL");
		Sleep(2500);
		system("cls");
		saldo_t = saldo - b_telpon;
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  PEMBAYARAN TELEPON BERHASIL                  \n");
		printf("\t  TERMINAL             : 34LD989               \n");
		printf("\t  NOMOR PELANGGAN      :(+62) %d\n", n_telepon);
		printf("\t  NOMINAL              : Rp %d\n", b_telpon);
		printf("\t  SALDO                : Rp %d\n", saldo_t);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(2000);
	}
	else if (cek_bayar == 3){
		system("cls");
		printf("MASUKKAN NOMOR PELANGGAN ANDA (6 DIGIT): "); scanf_s("%d", &n_air);
		printf("MASUKKAN NOMINAL PEMBAYARAN            : "); scanf_s("%d", &b_air);
		if (saldo < b_air) {
			system("cls");
			printf("\t MAAF SALDO ANDA TIDAK MENCUKUPI      \n");
			printf("\t SALDO ANDA SAAT INI ADALAH Rp %d\n", saldo);
			system("pause"); goto pembayaran;
		} else { goto lanjut_air; }
	lanjut_air:
		system("cls");
		printf("SEDANG MEMPROSES PEMBAYARAN");
		Sleep(4500);
		system("cls");
		printf("PEMBAYARAN ANDA TELAH BERHASIL");
		Sleep(2500);
		system("cls");
		saldo_a = saldo - b_air;
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  PEMBAYARAN AIR TELAH BERHASIL                  \n");
		printf("\t  TERMINAL             : 34LD989               \n");
		printf("\t  NOMOR PELANGGAN      : %d\n", n_air);
		printf("\t  NOMINAL              : Rp %d\n", b_air);
		printf("\t  SALDO                : Rp %d\n", saldo_a);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(2000);
	}
	else if (cek_bayar == 0){
		goto awal;
	}
	else {
		printf("MOHON MAAF LAYANAN TIDAK TERSEDIA"); Sleep(2500); goto pembayaran;
	}

transaksi:
	system("cls");
	printf("\t SILAHKAN PILIH MENU TRANSAKSI \n");
	printf("\t ````````````````````````````` \n");
	printf("\t [1] INFORMASI SALDO           \n");
	printf("\t [2] UBAH PIN                  \n");
	printf("\t [3] TRANSFER                  \n");
	printf("\t [0] KEMBALI                   \n");
	printf(" PILIHAN ANDA : "); scanf_s("%d", &pil_trans);
	if (pil_trans == 1){
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  INFORMASI SALDO ANDA                         \n");
		printf("\t  TERMINAL             : 34LD989               \n");
		printf("\t  SALDO                : Rp %d          \n", saldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t          ($Ilham Bank$) INFO 10101            \n");
		printf("\t  [1] MENU AWAL                                \n");
		printf("\t  [2] KELUAR                                \n");
		printf("PILIH MENU SELANJUTNYA : "), scanf_s("%d", &cek_stsal);
		system("pause");
		if (cek_stsal == 1){ goto awal; }
		else if (cek_stsal == 2){
			printf("TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI"); _exit(2000);
		}
		else{ printf("MAAF LAYANAN INI TIDAK TERSEDIA"); goto transaksi; }
	}
	else if (pil_trans == 2){
	pinlama:
		system("cls");
		printf("SILAHKAN MASUKKAN KEMBALI PIN LAMA ANDA\n");
		scanf_s("%d", &ubahpin);
		if (ubahpin == 919191){ goto pinbar_masuk; }
		else { printf("PIN YANG ANDA MASUKKAN SALAH"); goto pinlama; }
	pinbar_masuk:
		system("cls");
		printf("SILAHKAN MASUKKAN PIN BARU ANDA (6 DIGIT) \n");
		scanf_s("%d", &pinbar);
		system("cls");
	pinbar_konf:
		system("cls");
		printf("MASUKKAN KEMBALI PIN BARU ANDA \n");
		scanf_s("%d", &pinbar1);
		if (pinbar != pinbar1){
			printf("KONFIRMASI PIN SALAH\n"); Sleep(2100); goto pinbar_konf;
		}
		else{
			system("cls");
			printf("SELAMAT PIN ANDA TELAH BERUBAH\n");
			system("pause"); goto awal;
		}

	}
	else if (pil_trans == 3){
	kirim:
		system("cls");
		printf("MASUKKAN NOMOR REK. TUJUAN : "); scanf_s("%d", &tf);
		printf("JUMLAH UANG YANG DITRANSFER: "); scanf_s("%d", &ntf);
		if (saldo < ntf) {
			system("cls");
			printf("\t MAAF SALDO ANDA TIDAK MENCUKUPI UNTUK MELAKUKAN TRANSFER \n");
			printf("\t SALDO ANDA SAAT INI ADALAH Rp %d \n", saldo);
			system("pause"); goto kirim;
		}
		else { goto lanjut_kirim; }
	}
	else if (pil_trans == 0){
		goto awal;
	}
	else {
		printf("MAAF MENU BELUM TERSEDIA\n");
	}
	lanjut_kirim:
		system("cls");
		printf("PROSES TRANSFER SEDANG BERLANGSUNG HARAP MENUNGGU");
		Sleep(4500);
		system("cls");
		printf("TRANSFER ANDA TELAH BERHASIL");
		Sleep(2500);
		system("cls");
		tsaldo = saldo - ntf;
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$  \n");
		printf("\t  TERMINAL             : 34LD989               \n");
		printf("\t  NO. REK TUJUAN       : %d\n", tf);
		printf("\t  TRANSFER             : Rp %d\n", ntf);
		printf("\t  SALDO                : Rp %d\n", tsaldo);
		printf("\t  TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI  \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(2000);


// BAHASA INGGRIS :3
	upin_eng:
		system("cls");
		if (upin < 3) {
			printf("\t   INSERT YOUR PIN  \n ");
			scanf_s("%d", &pin);
			if (pin == 919191){
				goto awal1;
			} else {
				printf("\t  SORRY YOUR PIN IS INCORRECT       \n");
				printf("\t  eng       \n");
				upin++;
				Sleep(2500); goto upin_eng;
			}
		} else {
			printf("\n  YOU HAVE BEEN WRONG INPUT PIN FOR THREE TIMES   \n");
			printf("\t        SORRY YOUR ACCOUNT IS BANNED            \n");
			Sleep(4500);
			_exit(2000);
		}

	awal1:
		system("cls");
		printf("\t -----------------------MAIN MENU-----------------------\n");
		printf("\t |               MONEY FRACTION Rp 50.000               | \n");
		printf("\t ``````````````````````````````````````````````````````` \n");
		printf("\n[1]<---100.000                      500.000----------------->[2]");
		printf("\n[3]<---300.000                      1.000.000--------------->[4]");
		printf("\n[5]<---PAYMENT                      OTHER DRAWING AMOUNT---->[6]");
		printf("\n[7]<---OTHER TRANSACTION            EXIT-------------------->[8]\n");
		printf("CHOOSE THEN ENTER YOUR OPTION");
		printf(": "); scanf_s("%d", &menu1);

		if (menu1 == 1) {
			saldo = saldo - 100000;
			system("cls");
			printf("\nPLEASE TAKE YOUR MONEY"); Sleep(1500);
			system("cls");
			printf("\nPLEASE TAKE YOUR TRANSACTION PAPER"); Sleep(2000);
			system("cls");
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  TERMINAL   : 34LD989                         \n");
			printf("\t  NAME	     : NUR MUHAMMAD ILHAM             \n");
			printf("\t  DRAWING    : Rp 100.000                        \n");
			printf("\t  BALLANCE   : Rp %d                      \n", saldo);
			printf("\t        THANK YOU FOR USING OUR SERVICE        \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(6000);
		}
		else if (menu1 == 2) {
			saldo = saldo - 500000;
			system("cls");
			printf("\nPLEASE TAKE YOUR MONEY"); Sleep(1500);
			system("cls");
			printf("\nPLEASE TAKE YOUR TRANSACTION PAPER"); Sleep(2000);
			system("cls");
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  TERMINAL   : 34LD989                         \n");
			printf("\t  NAME	     : NUR MUHAMMAD ILHAM             \n");
			printf("\t  DRAWING    : Rp 500.000                        \n");
			printf("\t  BALLANCE   : Rp %d                      \n", saldo);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(6000);
		}
		else if (menu1 == 3) {
			saldo = saldo - 300000;
			system("cls");
			printf("\nPLEASE TAKE YOUR MONEY"); Sleep(1500);
			system("cls");
			printf("\nPLEASE TAKE YOUR TRANSACTION PAPER"); Sleep(2000);
			system("cls");
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  TERMINAL   : 34LD989                         \n");
			printf("\t  NAME	     : NUR MUHAMMAD ILHAM             \n");
			printf("\t  DRAWING    : Rp 300.000                        \n");
			printf("\t  BALLANCE   : Rp %d                      \n", saldo);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(6000);
		}
		else if (menu1 == 4) {
			saldo = saldo - 1000000;
			system("cls");
			printf("\nPLEASE TAKE YOUR MONEY"); Sleep(1500);
			system("cls");
			printf("\nPLEASE TAKE YOUR TRANSACTION PAPER"); Sleep(2000);
			system("cls");
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  TERMINAL   : 34LD989                         \n");
			printf("\t  NAME	     : NUR MUHAMMAD ILHAM             \n");
			printf("\t  DRAWING    : Rp 1.000.000                       \n");
			printf("\t  BALLANCE   : Rp %d                      \n", saldo);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(6000);
		}
		else if (menu1 == 5){
			goto pembayaran1;
		}
		else if (menu1 == 6){
			goto tarik_lain1;
		}
		else if (menu1 == 7){
			goto transaksi1;

		}
		else if (menu1 == 8){
			system("cls");
			printf("THANK YOU FOR USING OUR SERVICE\n");
			system("pause"); _exit(0);

		}
		else{
			system("cls");
			printf("SORRY THIS SERVICE IS UNAVAILABLE"); _exit(800);
		}



	tarik_lain1:
		system("cls");
		printf("\t                   INSERT AMOUNT OF DRAWING                        \n");
		printf("\t     IN FRACTION Rp50000 WITH MAXIMUM DRAWING IS Rp1250000         \n");
		printf("\t : Rp "); scanf_s("%d", &ambil);
		goto tarik1;

	tarik1:
		system("cls");
		printf("YOUR REQUEST IN PROCESS");
		if (saldo < ambil) {
			printf("\t SORRY YOUR BALLANCE IS NOT ENOUGH \n");
			printf("\t YOUR BALLANCE IS Rp %d     \n", saldo);
			goto awal1;
		}
		else {
			saldo = saldo - ambil;
			Sleep(1000); system("cls");
			cek = ambil % 50000;
		}
		if (cek != 0 || ambil > 1250000) {
			printf("SORRY PLEASE ENTER IN FRACTION OF Rp50000\n");
			printf("\t  AND MAXIMUM DRAWING IS Rp1250000     \n");
			Sleep(3000); goto tarik_lain1;
		}
		else {
			printf("\t YOUR REQUEST IN PROCESS \n");
			printf("\t PLEASE TAKE YOUR MONEY \n");
			Sleep(2000);
			printf("\nCHOOSE [1] TRANSACTION PAPER.\n[2] EXIT."); scanf_s("%d", &pil);
			switch (pil) {
			case '1': goto cek_resi1; break;
			case '2': _exit(2000);
			}
		}
	cek_resi1:
		system("cls");
		printf("\t  ___________________________________________  \n");
		printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
		printf("\t  ```````````````````````````````````````````  \n");
		printf("\t  TERMINAL   : 34LD989                         \n");
		printf("\t  NAME	     : NUR MUHAMMAD ILHAM              \n");
		printf("\t  DRAWING    : Rp %d                        \n", ambil);
		printf("\t  BALLANCE   : Rp %d                      \n", saldo);
		printf("\t        THANK YOU FOR USING OUR SERVICE        \n");
		printf("\t                 INFO 10101                    \n");
		system("pause"); _exit(6000);

	pembayaran1:
		system("cls");
		printf("\t  CHOOSE PAYMENT YOU WANT \n");
		printf("\t  [1] ELECTRICITY/PLN     \n");
		printf("\t  [2] TELEPHONE           \n");
		printf("\t  [3] WATER               \n");
		printf("\t  [0] CANCEL              \n");
		printf("ENTER YOUR OPTION : "); scanf_s("%d", &cek_bayar);

		if (cek_bayar == 1){
			system("cls");
			printf("INSERT YOUR COSTUMER NUMBER (6 DIGIT): "); scanf_s("%d", &n_listrik);
			printf("INSERT AMOUNT OF PAYMENT             : "); scanf_s("%d", &b_listrik);
			if (saldo < b_listrik) {
				system("cls");
				printf("\t SORRY YOUR BALLANCE IS NOT ENOUGH \n");
				printf("\t YOUR BALLANCE IS Rp %d\n", saldo);
				system("pause"); goto pembayaran1;
			}
			else { goto lanjut_listrik1; }
		lanjut_listrik1:
			system("cls");
			printf("YOUR PAYMENT IS IN PROCESS");
			Sleep(4500);
			system("cls");
			printf("YOUR PAYMENT IS SUCCESS");
			Sleep(1500);
			system("cls");
			saldo_l = saldo - b_listrik;
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  YOUR ELECTRICITY PAYMENT IS SUCCESS          \n");
			printf("\t  TERMINAL        : 34LD989                    \n");
			printf("\t  CUSTOMER NUMBER : %d\n", n_listrik);
			printf("\t  AMOUNT          : Rp %d\n", b_listrik);
			printf("\t  BALLANCE        : Rp %d\n", saldo_l);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(2000);
		}
		else if (cek_bayar == 2){
			system("cls");
			printf("INSERT YOUR PHONE NUMBER             :(+62) "); scanf_s("%d", &n_telepon);
			printf("INSERT AMOUNT OF PAYMENT             : "); scanf_s("%d", &b_telpon);
			if (saldo < b_telpon) {
				system("cls");
				printf("\t SORRY YOUR BALLANCE IS NOT ENOUGH    \n");
				printf("\t YOUR BALLANCE IS Rp %d        \n", saldo);
				system("pause"); goto pembayaran1;
			}
			else { goto lanjut_telpon1; }
		lanjut_telpon1:
			system("cls");
			printf("IN PROCESS");
			Sleep(4500);
			system("cls");
			printf("YOUR PAYMENT IS SUCCESS");
			Sleep(2500);
			system("cls");
			saldo_t = saldo - b_telpon;
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  TELEPHONE PAYMENT IS SUCCESS                 \n");
			printf("\t  TERMINAL             : 34LD989               \n");
			printf("\t  PHONE NUMBER         :(+62)%d\n", n_telepon);
			printf("\t  AMOUNT               : Rp %d\n", b_telpon);
			printf("\t  BALLANCE             : Rp %d\n", saldo_t);
			printf("\t       THANK YOU FOR USING OUR SERVICE         \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(2000);
		}
		else if (cek_bayar == 3){
			system("cls");
			printf("INSERT YOUR COSTUMER NUMBER (6 DIGIT)  : "); scanf_s("%d", &n_air);
			printf("INSERT AMOUNT OF PAYMENT               : "); scanf_s("%d", &b_air);
			if (saldo < b_air) {
				system("cls");
				printf("\t SORRY YOUR BALLANCE IS NOT ENOUGH    \n");
				printf("\t YOUR BALLANCE IS Rp %d        \n", saldo);
				system("pause"); goto pembayaran1;
			}
			else { goto lanjut_air1; }
		lanjut_air1:
			system("cls");
			printf("IN PROCESS");
			Sleep(4500);
			system("cls");
			printf("YOUR PAYMENT IS SUCCESS");
			Sleep(2500);
			system("cls");
			saldo_a = saldo - b_air;
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  YOUR WATER PAYMENT IS SUCCESS                \n");
			printf("\t  TERMINAL             : 34LD989               \n");
			printf("\t  CUSTOMER NUMBER      : %d\n", n_air);
			printf("\t  AMOUNT               : Rp %d\n", b_air);
			printf("\t  BALLANCE                : Rp %d\n", saldo_a);
			printf("\t        THANK YOU FOR USING OUR SERVICE        \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(2000);
		}
		else if (cek_bayar == 0){ goto awal1; }
		else {
			printf("SORRY THIS SERVICE IS UNAVAILABLE"); Sleep(2500); goto pembayaran1;
		}

	transaksi1:
		system("cls");
		printf("\t    CHOOSE TRANSACTION MENU \n");
		printf("\t ````````````````````````````` \n");
		printf("\t [1] BALLANCE INFO             \n");
		printf("\t [2] CHANGE PIN                \n");
		printf("\t [3] TRANSFER                  \n");
		printf("\t [0] CANCEL                    \n");
		printf(" YOUR OPTION : "); scanf_s("%d", &pil_trans1);
		if (pil_trans1 == 1){
			system("cls");
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  YOUR BALLANCE INFO                           \n");
			printf("\t  TERMINAL             : 34LD989               \n");
			printf("\t  BALLANCE             : Rp %d          \n", saldo);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t          ($Ilham Bank$) INFO 10101            \n");
			printf("\t  [1] MAIN MENU                                \n");
			printf("\t  [2] EXIT                                \n");
			printf("YOUR OPTION : "), scanf_s("%d", &cek_stsal);
			system("pause");
			if (cek_stsal == 1){ goto awal1; }
			else if (cek_stsal == 2){
				printf("THANK YOU FOR USING OUR SERVICE"); _exit(2000);
			}
			else{ printf("SORRY THIS SERVICE IS UNAVAILABLE"); goto transaksi1; }
		}
		else if (pil_trans1 == 2){
		pinlama1:
			system("cls");
			printf("PLEASE INSERT YOUR OLD PIN\n");
			scanf_s("%d", &ubahpin);
			if (ubahpin == 919191){ goto pinbar_masuk1; }
			else { printf("SORRY YOUR OLD PIN IS WRONG"); goto pinlama1; }
		pinbar_masuk1:
			system("cls");
			printf("PLEASE INSERT YOU NEW PIN (6 DIGIT) \n");
			scanf_s("%d", &pinbar1);
			system("cls");
		pinbar_konf1:
			system("cls");
			printf("PLEASE REINSERT YOUR NEW PIN (6 DIGIT)\n");
			scanf_s("%d", &pinbar11);
			if (pinbar1 != pinbar11){
				printf("WRONG CONFIRMATION\n"); Sleep(2100); goto pinbar_konf1;
			}
			else{
				system("cls");
				printf("CONGRATULATION YOUR PIN IS CHANGED\n");
				system("pause"); goto awal1;
			}

		}
		else if (pil_trans1 == 3){
		kirim1:
			system("cls");
			printf("INSERT DESTINATION ACCOUNT NUMBER: "); scanf_s("%d", &tf);
			printf("TRANSFER AMOUNT : "); scanf_s("%d", &ntf);
			if (saldo < ntf) {
				system("cls");
				printf("\t SORRY YOUR BALLANCE IS NOT ENOUGH FOR TRANSFER \n");
				printf("\t YOUR BALLANCE IS Rp %d \n", saldo);
				system("pause"); goto kirim1;
			}
			else { goto lanjut_kirim1; }
		lanjut_kirim1:
			system("cls");
			printf("TRANSFER IN PROGRESS... PLEASE WAIT ");
			Sleep(4500);
			system("cls");
			printf("YOUR TRANSFER IS SUCCESS");
			Sleep(2500);
			system("cls");
			saldo = saldo - ntf;
			printf("\t  ___________________________________________  \n");
			printf("\t  |0day        $$ Ilham  Bank $$        0day|  \n");
			printf("\t  ```````````````````````````````````````````  \n");
			printf("\t  $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$ $$$  \n");
			printf("\t  TERMINAL                : 34LD989               \n");
			printf("\t  DESTINATION ACC. NUMBER : %d\n", tf);
			printf("\t  TRANSFER                : Rp %d\n", ntf);
			printf("\t  BALLANCE                : Rp %d\n", saldo);
			printf("\t         THANK YOU FOR USING OUR SERVICE       \n");
			printf("\t                 INFO 10101                    \n");
			system("pause"); _exit(2000);
		}
		else if (pil_trans1 == 0){ goto awal1; }
		else{ printf("SORRY THIS CONTENT IS UNAVAILABLE"); system("pause"); goto transaksi1; }
	
}
