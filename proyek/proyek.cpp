#include <iostream>

int main() {
    double HargaAsli = 150000;
    double persentasiDiskon = 12.5;

    double hargaDiskon = HargaAsli * (persentasiDiskon / 100);
    double hargaAkhir = HargaAsli - hargaDiskon;

    std::cout << "Harga asli : " << 150000 << std::endl;
    std::cout << "Diskon : " << 12.5 << std::endl;
    std::cout << "Harga diskon : " << 18750 << std::endl;
    std::cout << "Harga Akhir : " << 131250 << " ribu" << std::endl;

}