#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Untuk fungsi strcmp

// Fungsi untuk mengecek apakah input valid (hanya integer)
int isIntegerInput() {
    char input[100];
    int number;
    if (fgets(input, sizeof(input), stdin) != NULL) {
        if (sscanf(input, "%d", &number) == 1) {
            return number;
        }
    }
    return -1; // Input tidak valid
}

void transferPulsa() {
    printf("Masukkan nomor tujuan: ");
    int nomor = isIntegerInput();
    if (nomor == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Masukkan jumlah pulsa yang ingin ditransfer: ");
    int jumlah = isIntegerInput();
    if (jumlah == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Pulsa sebesar Rp %d berhasil ditransfer ke nomor %d.\n", jumlah, nomor);
}

void mintaPulsa() {
    printf("Nomor permintaan pulsa: 087761811187\n");
    printf("Masukkan jumlah pulsa yang ingin diminta: ");
    int jumlah = isIntegerInput();
    if (jumlah == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Permintaan pulsa sebesar Rp %d berhasil dikirim.\n", jumlah);
}

void paketInternet() {
    printf("Anda memilih Paket Internet.\n");
    printf("Masukkan jumlah kuota yang ingin dibeli (dalam GB): ");
    int kuota = isIntegerInput();
    if (kuota == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Paket Internet %d GB berhasil dibeli.\n", kuota);
}

void paketBooster() {
    printf("Anda memilih Paket Booster.\n");
    printf("Masukkan jumlah kuota booster yang ingin dibeli (dalam GB): ");
    int kuota = isIntegerInput();
    if (kuota == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Paket Booster %d GB berhasil dibeli.\n", kuota);
}

void paketTelp() {
    printf("Anda memilih Paket Telp.\n");
    printf("Masukkan jumlah menit yang ingin dibeli: ");
    int menit = isIntegerInput();
    if (menit == -1) {
        printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
        return;
    }
    printf("Paket Telp %d menit berhasil dibeli.\n", menit);
}

void info() {
    printf("Pulsa anda: Rp. 15.000\n");
    printf("Nomor anda: 087761811187\n");
}

int main() {
    int choice;
    char menu[10];

    printf("Silahkan melakukan panggilan (*858#/keluar) : ");
    scanf("%s", menu);

    // Gunakan strcmp untuk membandingkan string
    if (strcmp(menu, "*858#") == 0) {
        do {
            printf("\nPulsa anda: Rp. 15.000\n");
            printf("1. Transfer Pulsa\n");
            printf("2. Minta Pulsa\n");
            printf("3. Paket Internet\n");
            printf("4. Paket Booster\n");
            printf("5. Paket Telp\n");
            printf("6. Info\n");
            printf("7. Keluar\n");
            printf("Pilih menu: ");
            choice = isIntegerInput();
            
            if (choice == -1) {
                printf("Input tidak valid! Hanya angka yang diperbolehkan.\n");
                continue;
            }

            switch (choice) {
                case 1:
                    transferPulsa();
                    break;
                case 2:
                    mintaPulsa();
                    break;
                case 3:
                    paketInternet();
                    break;
                case 4:
                    paketBooster();
                    break;
                case 5:
                    paketTelp();
                    break;
                case 6:
                    info();
                    break;
                case 7:
                    printf("Terima kasih telah menggunakan layanan kami!\n");
                    break;
                default:
                    printf("Pilihan tidak valid, silakan coba lagi.\n");
            }
        } while (choice != 7);
    } else if (strcmp(menu, "keluar") == 0) {
        printf("Terima kasih!\n");
        return 0;
    } else {
        printf("Menu tidak valid\n");
        main();  // Hindari penggunaan main() secara langsung
    }

    return 0;
}
