#include <stdio.h> 
#include <string.h> //untuk penggunaan fungsi gabungWarna membandingkan 2 string 
#include <ctype.h> //untuk penggunaan fungsi toLower dimana mengubah huruf kapital maupun lainnya menjadi huruf kecil

void toLowerStr(char *str) { // function: function disini berguna untuk mengubah teks di dalam string menjadi huruf kecil, user ataupun pengguna bisa menginput teks dengan huruf kapital ataupun kecil maka hasil yang akan keluar akan tetap huruf kecil

    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    } //looping/perulangan: agar dapat mengulang kondisi ketika pengguna menginput huruf dalam string agar tetap huruf kecil 
}

const char* gabungWarna(const char *warna1, const char *warna2) { //function: berguna untuk menyimpan hasil penggabungan warna yang akan diinput oleh pengguna ataupun user yang akan mengembalikan/menghasilkan hasil teks yang akan berwarna di terminal dengan menggunakan kode ANSI RGB karena memakai return 
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

    
    //function: masih dalam satu fungsi akan tetapi di fungsi ini pengguna tidak menginputkan warnanya, karena untuk warna1 dan warna2 diambil dari hasil fungsi penggabungan yag pertama, dalam fungsi inipun sama menggunakan kode ANSI RGB agar hasil teks yang keluar akan berwarna

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
    } //if-else: fungsi ini menggunakan kondisi if-else karena hasilnya yang keluar akan sesuai kondisi yang di inginkan pengguna
}

int main() { 
    char warna1[20];
    char warna2[20];
    char warna3[20];
    char warna4[20];
    char gabung[2]; 
    //array: menyimpan karakter string dalam []
    //variabel dalam tipe array 

    printf("\nPlihlah Warna!\n"); //output

    printf("\033[1;31mMerah\033[0m\n"); //output
    printf("\033[1;33mKuning\033[0m\n"); //output
    printf("\033[1;34mBiru\033[0m\n"); //output
    printf("\033[1;37mPutih\033[0m\n\n"); //output

    printf("--------------------------------\n"); //output

    printf("Masukkan warna ke-1 : "); //output
    scanf("%s", warna1); //input: pengguna menginput warna pertama untuk penggabungan warna pertama
    toLowerStr(warna1); //memanggil fungsi toLowerStr

    printf("Masukkan warna ke-2 : "); //output
    scanf("%s", warna2); //input: pengguna menginput warna kedua untuk penggabungan warna pertama
    toLowerStr(warna2); //memanggil fungsi toLowerStr

    const char* hasil = gabungWarna(warna1, warna2); //memanggil fungsi gabungWarna dan disimpan kedalam variabel hasil
    printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", warna1, warna2, hasil); //setelah pengguna menginputkan warna1 dan warna2 maka program akan mengeluarkan kalimat berikut dengan hasil penggabungan warna dan memanggil fungsi gabungWarna //output

    printf("--------------------------------\n"); //output

    printf("Masukkan warna ke-3 : "); //output
    scanf("%s", warna3); //input: pengguna menginput warna ketiga untuk penggabungan warna kedua
    toLowerStr(warna3); //memanggil fungsi toLowerStr

    printf("Masukkan warna ke-4 : "); //output
    scanf("%s", warna4); //input: pengguna menginput warna keempat untuk penggabungan warna kedua
    toLowerStr(warna4); //memanggil fungsi toLowerStr

    const char* hasil2 = gabungWarna(warna3, warna4); //memanggil fungsi gabungWarna dan disimpan kedalam variabel hasil2
    printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", warna3, warna4, hasil2); //setelah pengguna menginputkan warna3 dan warna4 maka program akan mengeluarkan kalimat berikut dengan hasil penggabungan warna dan memanggil fungsi gabungWarna //output


    if (strcmp(hasil, "Tidak diketahui") != 0 && strcmp(hasil2, "Tidak diketahui") != 0) { //if-else/kondisi: ketika hasil penggabungan pertama dan kedua bukan benar dan selain "Tidak diketahui" maka program akan menjalankan kondisi yang pertama 
        printf("Apakah warna %s ingin digabungkan dengan warna %s? (y/n) : ", hasil, hasil2); //jika kondisi pertama benar maka program akan memberikan pertanyaan ke pengguna apakah hasil penggabungan pertama dan hasil penggabungan kedua ingin digabungkan jawabannya y/n //output
        scanf("%s", gabung); // input: y/n 

        if(strcmp(gabung, "y") == 0){ //if-else: kondisi ketika pengguna menginput y 
            printf("\nWarna ke-1 : %s", hasil); //output
            printf("\nWarna ke-2 : %s\n", hasil2); //output
            //maka program akan mengeluarkan hasil penggabungan warna pertama dan hasil penggabungan warna kedua
            
            const char* hasilNext = gabungWarna(hasil, hasil2); //masih dalam kondisi ketika pengguna menginput y maka akan memanggil fungsi gabungWarna dan disimpan kedalam variabel hasilNext
            printf("\nHasil penggabungan antara warna %s dan warna %s yaitu menjadi warna %s\n\n", hasil, hasil2, hasilNext); //maka program akan mengeluarkan hasil penggabungan warna pertama dan hasil penggabungan warna kedua dan hasil dari penggabungan warna pertama dan kedua //output

            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : "); //setelah itu program akan memberi pertanyaan ke pengguna apakah ingin mencoba penggabungan warna lain //output
            scanf("%s", gabung); //input antara y/n

            if(strcmp(gabung, "y") == 0){  
                main(); //jika pengguna menginput y maka akan memanggil fungsi main dan mengulang kembali kondisi di dalam fungsi main hingga hasil penggabungan pertama dengan penggabungan kedua
            } else {
                printf("\nProgram Penggabungan Warna Selesai"); //jika n maka program akan selesai //output
            }    
        } else { //if-else: kondisi ketika pengguna menginput n
            printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : "); //maka program akan menanyakan apakah ingin mencoba gabung warna lainnya //output
            scanf("%s", gabung); //input y/n

            if(strcmp(gabung, "y") == 0){ //kondisi ketika pengguna menginput y
                main(); //program akan menjalan fungsi main
            } else { //kondisi ketika pengguna menginput n
                printf("\nProgram Penggabungan Warna Selesai"); //maka program selesai //output
            }        
        }
    } else { //kondisi kedua ketika pengguna menginputkan warna yang tidak ada dan teks yang salah
        printf("Kedua hasil warna tidak dapat digabungkan, karena salah satu atau kedua warnanya tidak diketahui\n\n"); //maka program akan mengeluarkan kalimat berikut //output



        printf("Apakah ingin mencoba penggabungan warna lainnya? (y/n) : "); //output //selanjutnya program akan menanyakan kembali apakah ingin penggabungan kembali atau tidak
        scanf("%s", gabung); //input y atau n

        if(strcmp(gabung, "y") == 0){ //kondisi ketika pengguna menginput y 
            main(); //program akan menjalan fungsi main
        } else { //kondisi ketika pengguna menginput n
            printf("\nProgram Penggabungan Warna Selesai"); //output //maka program selesai
        }     
    }    

    return 0;
}
