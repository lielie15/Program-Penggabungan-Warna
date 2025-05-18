#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerStr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

const char* gabungWarna(const char *warna1, const char *warna2) {
       if ((strcmp(warna1, "merah") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "merah") == 0)) {
        return"\033[38;2;255;105;180mMerah Muda\033[0m";

    } else if ((strcmp(warna1, "merah") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "merah") == 0)) {
        return"\033[38;2;255;165;0mJingga\033[0m";  

    } else if ((strcmp(warna1, "biru") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "biru") == 0)) {
        return"\033[1;32mHijau\033[0m"; 

    } else if ((strcmp(warna1, "merah") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "merah") == 0)) {
        return"\033[1;35mUngu\033[0m"; 

    } else if ((strcmp(warna1, "biru") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "biru") == 0)) {
        return"\033[1;36mBiru Muda\033[0m";  

    } else if ((strcmp(warna1, "kuning") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "kuning") == 0)) {
        return"\033[38;2;255;255;127mKuning Muda\033[0m";  

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"033[38;2;255;0;128mMagenta\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;255;165;0mJingga\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;200;162;200mUngu Muda\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;255;180;217mMerah Muda Pucat\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "ungu") == 0) || (strcmp(warna1, "ungu") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;139;0;0mMerah Tua\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;255;69;0mMerah Jingga\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;255;200;0mKuning Jingga\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;128;82;128mCokelat Kemerahan\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;255;210;128mKrem\033[0m";
        
    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;144;238;144mHijau Muda\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;0;128;128mHijau Toska\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;127;191;0mHijau Limau\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;204;204;0mCokelat\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;191;0;64mMagenta\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;139;69;19mCokelat\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;64;0;192mBiru Tua\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;200;162;200mUngu Muda\033[0m";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[38;2;173;216;230mBiru Sangat Muda\033[0m";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[1;34mBiru\033[0m\n";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[38;2;144;238;144mHijau Muda\033[0m";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[38;2;200;162;200mUngu Muda\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "merah") == 0) || (strcmp(warna1, "merah") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0)) {
        return"\033[38;2;255;165;0mJingga\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "kuning") == 0) || (strcmp(warna1, "kuning") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0)) {
        return"\033[38;2;255;223;0mKuning Cerah\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "biru") == 0) || (strcmp(warna1, "biru") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0)) {
        return"\033[38;2;144;238;144mHijau Muda\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "putih") == 0) || (strcmp(warna1, "putih") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0)) {
        return"\033[38;2;255;210;128mKrem\033[0m";

    } else {
        return"Tidak diketahui";
    }
}

int main() {
    char warna1[20];
    char warna2[20];
    char is_gabung[2]; 

    printf("\nPlihlah Warna!\n");

    printf("\033[1;31mMerah\033[0m\n");
    printf("\033[1;33mKuning\033[0m\n");
    printf("\033[1;34mBiru\033[0m\n");
    printf("\033[1;37mPutih\033[0m\n\n");

    printf("Masukkan warna ke-1 : ");
    scanf("%s", warna1);
    toLowerStr(warna1);

    printf("Masukkan warna ke-2 : ");
    scanf("%s", warna2);
    toLowerStr(warna2);


    const char* hasil = gabungWarna(warna1, warna2);
    printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", warna1, warna2, hasil);

    if (strcmp(hasil, "Tidak diketahui") != 0) {
        printf("Apakah %s ingin digabungkan dengan warna lain? (y/n) : ", hasil);
        scanf("%s", is_gabung);

        if(strcmp(is_gabung, "y") == 0){
            printf("\nWarna ke-1 : %s\n", hasil);
            printf("Masukkan warna ke-2 : ");
            scanf("%s", warna2);
            toLowerStr(warna2);

            const char* hasil_next = gabungWarna(hasil, warna2);
            printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", hasil, warna2, hasil_next);

            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
            scanf("%s", is_gabung);

            if(strcmp(is_gabung, "y") == 0){
                main();
            } else {
                printf("\nProgram Penggabungan Warna Selesai");
            }    
        } else {
            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
            scanf("%s", is_gabung);

            if(strcmp(is_gabung, "y") == 0){
                main();
            } else {
                printf("\nProgram Penggabungan Warna Selesai");
            }        
        }
    } else {
        printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
        scanf("%s", is_gabung);

        if(strcmp(is_gabung, "y") == 0){
            main();
        } else {
            printf("\nProgram Penggabungan Warna Selesai");
        }     
    }    

    return 0;
}
