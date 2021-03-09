#ifndef kalku_h
#define kalku_h

//fungsi tambah
void tambah() {
    double a,b;
    printf("Masukkan bilangan pertama: ");
    scanf("%lf",&a);
    printf("Masukkan bilangan kedua: ");
    scanf("%lf",&b);
    printf("Hasil penjumlahan adalah : %.2lf\n",a+b);
}

//fungsi kurang
void kurang() {
    double a,b;
    printf("Masukkan bilangan yang akan dikurangi: ");
    scanf("%lf",&a);
    printf("Masukkan bilangan pengurangnya: ");
    scanf("%lf",&b);
    printf("Hasil pengurangan adalah: %.2lf\n",a-b);
}

//fungsi kali
void kali() {
    double a,b;
    printf("Masukkan bilangan yang akan dikurangi: ");
    scanf("%lf",&a);
    printf("Masukkan bilangan pengurangnya: ");
    scanf("%lf",&b);
    printf("Hasil perkalian adalah %.2lf\n",a*b);
}

//fungsi untuk memangkatkan
double fungsiPangkat(double base, int exp) {
    int result;
    result=1;
    for(int i=0;i<exp;i++) {
        result=result*base;
    }
    return result;    
}

//fungsi pangkat, termasuk mengambil input dari user
int pangkat() {
    double base;
    int exp;
    printf("Masukkan basis: ");
    scanf("%lf",&base);
    printf("Masukkan eksponen(bilangan bulat): ");
    scanf("%d",&exp);
    double result=1;
    //memanggil fungsiPangkat yg telah dibuat
    result=fungsiPangkat(base, exp);
    printf("Hasil perpangkatan adalah: %.2lf\n",result);
}

//fungsi bagi
void bagi() {
    double terbagi,pembagi;
    printf("Masukkan bilangan yang akan dibagi: ");
    scanf("%lf",&terbagi);
    printf("Masukkan bilangan pembagi: ");
    scanf("%lf",&pembagi);
    printf("Hasil pembagian adalah: %.2lf\n",terbagi/pembagi);
}

//fungsi polinom
double polinom(double x, int suku, double koefisien[suku+1]) {
    double result=0;
    for(int i=0;i<suku+1;i++) {
        result += koefisien[i]*fungsiPangkat(x,i);
    }
}

//fungsi inegral
void trapInt() {
    int suku;
    printf("Anda akan mengintegralkan fungsi polinomial\n");
    printf("Masukkan derajat polinomial anda: ");
    scanf("%d",&suku);
    double koefisien[suku+1];
    for(int i=0;i<suku+1;i++) {
        printf("Masukkan koefisien pangkat ke-%d :",i);
        scanf("%lf",&koefisien[i]);        
    }
    
    double x0,x1;
    double delta=0.0001;
    
    printf("Masukkan batas bawah integrasi: ");
    scanf("%lf",&x0);
    printf("Masukkan batas atas integrasi: ");
    scanf("%lf",&x1);

    double point, f_down,f_up;
    double result=0;
    point=x0;
    f_up=polinom(point,suku,koefisien);

    while(point<=x1) {
        f_down=f_up;
        f_up=polinom(point+delta, suku, koefisien);
        result+=(f_up+f_down)*delta/2;
        point+=delta;
    }
    printf("Hasil pengintegralan dari fungsi adalah %.2lf \n",result);
}

#endif
