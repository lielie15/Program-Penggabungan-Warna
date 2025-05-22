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

        /////

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;255;179;102mPeach Muda\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0) || (strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;128;160;102mZaitun Pastel\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0) || (strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;192;96;166mUngu Muda Cerah\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0) || (strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;214;204;217mLavender Pastel\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;255;224;153mPeach Pastel\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0) || (strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;127;147;0mHijau Limau Tua\033[0m"; 

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0) || (strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;192;83;64mCokelat Merah Tembaga\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0) || (strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;214;191;115mKaramel Pastel\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;255;210;51mKuning Jingga Cerah\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0) || (strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;64;64;64mAbu-abu Gelap\033[0m";
        
    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0) || (strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;87;172;115mHijau Laut Pastel\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[38;2;128;192;51mHijau Limau Cerah\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0) || (strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;151;108;179mLavender Kebiruan\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[38;2;192;128;115mSalmon Tua\033[0m";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[38;2;214;236;166mHijau Lemon Pastel\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;105;180mMerah Muda\033[0m") == 0)) {
        return"\033[38;2;200;162;200mUngu Muda\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;165;0mJingga\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;165;0mJingga\033[0m") == 0)) {
        return"\033[38;2;173;216;230mBiru Muda terang\033[0m";

    } else if ((strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0) || (strcmp(warna1, "\033[1;32mHijau\033[0m") == 0 && strcmp(warna2, "\033[1;32mHijau\033[0m") == 0)) {
        return"\033[1;32mHijau\033[0m";

    } else if ((strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0) || (strcmp(warna1, "\033[1;35mUngu\033[0m") == 0 && strcmp(warna2, "\033[1;35mUngu\033[0m") == 0)) {
        return"\033[1;35mUngu\033[0m";

    } else if ((strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0) || (strcmp(warna1, "\033[1;36mBiru Muda\033[0m") == 0 && strcmp(warna2, "\033[1;36mBiru Muda\033[0m") == 0)) {
        return"\033[1;36mBiru Muda\033[0m";

    } else if ((strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0) || (strcmp(warna1, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0 && strcmp(warna2, "\033[38;2;255;255;127mKuning Muda\033[0m") == 0)) {
        return"\033[38;2;255;255;127mKuning Muda\033[0m";

    } else {
        return"Tidak diketahui";
    }
}

int main() {
    char warna1[20];
    char warna2[20];
    char warna3[20];
    char warna4[20];
    char gabung[2]; 

    printf("\nPlihlah Warna!\n");

    printf("\033[1;31mMerah\033[0m\n");
    printf("\033[1;33mKuning\033[0m\n");
    printf("\033[1;34mBiru\033[0m\n");
    printf("\033[1;37mPutih\033[0m\n\n");

    printf("--------------------------------\n");

    printf("Masukkan warna ke-1 : ");
    scanf("%s", warna1);
    toLowerStr(warna1);

    printf("Masukkan warna ke-2 : ");
    scanf("%s", warna2);
    toLowerStr(warna2);

    const char* hasil = gabungWarna(warna1, warna2);
    printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", warna1, warna2, hasil);

    printf("--------------------------------\n");

    printf("Masukkan warna ke-3 : ");
    scanf("%s", warna3);
    toLowerStr(warna3);

    printf("Masukkan warna ke-4 : ");
    scanf("%s", warna4);
    toLowerStr(warna4);

    const char* hasil2 = gabungWarna(warna3, warna4);
    printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", warna3, warna4, hasil2);

    if (strcmp(hasil, "Tidak diketahui") != 0 && strcmp(hasil2, "Tidak diketahui") != 0) {
        printf("Apakah warna %s ingin digabungkan dengan warna %s? (y/n) : ", hasil, hasil2);
        scanf("%s", gabung);

        if(strcmp(gabung, "y") == 0){
            printf("\nWarna ke-1 : %s", hasil);
            printf("\nWarna ke-2 : %s\n", hasil2);

            const char* hasilNext = gabungWarna(hasil, hasil2);
            printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", hasil, hasil2, hasilNext);

            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
            scanf("%s", gabung);

            if(strcmp(gabung, "y") == 0){
                main();
            } else {
                printf("\nProgram Penggabungan Warna Selesai");
            }    
        } else {
            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
            scanf("%s", gabung);

            if(strcmp(gabung, "y") == 0){
                main();
            } else {
                printf("\nProgram Penggabungan Warna Selesai");
            }        
        }
    } else {
        printf("Kedua hasil warna tidak dapat digabungkan, karena salah satu atau kedua warnanya tidak diketahui\n\n");
        printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : ");
        scanf("%s", gabung);

        if(strcmp(gabung, "y") == 0){
            main();
        } else {
            printf("\nProgram Penggabungan Warna Selesai");
        }     
    }    

    return 0;
}
