/*17 вариант */

#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>
#include <algorithm>

void func(std::vector<std::string> arg);

int main() {
    std::string a;
    std::vector<std::string> mode;
    std::cout << "Enter mode (encryption/decryption): " << std::endl;
    std::cin >> a;
    if (a == "encryption" || a == "decryption") {
        mode.push_back(a);
        std::cout << "Enter filename: " << std::endl;
        std::cin >> a;
        mode.push_back(a);
        func(mode);
    } else {
        std::cerr << "Error: Write correct mode!" << std::endl;
    }
    return 0;
}

void func(std::vector<std::string> arg) {
    const std::string mode(arg[0]); // Режим работы
    const std::string file_name(arg[1]); // Имя файла
    int gamma = rand();
    int shift = 2;
    std::string key1;
    char key = key1[2];
    int a = rand();
    srand(time(nullptr));
    if (mode == "encryption") {
        std::string enc1, enc2;
        int pass1;
        std::cout << "Please, enter string which you want to encrypt" << std::endl;
        std::cin >> enc1;
        getline(std::cin, enc2);
        enc1 += enc2;
        if (enc1.size() > 248) std::cerr << "Error: Write correct string (<=248)" << std::endl;
        else {
            std::cout << "Please, enter password: " << std::endl;
            if (std::cin >> pass1) {
                std::string key1 = std::to_string(a);
                std::string pass = std::to_string(pass1);
                std::bitset<16> m(key);
                std::string text_input;
                for (int i = 0; i < text_input.size(); i++) {}
                int block;
                int block_encrypt =
                        (block >> shift) | (block << (16 - shift)); // Сдвиг с наложением маски
                int block_gamma = block_encrypt ^ gamma;
                unsigned int foo = block_gamma >> 8;
                std::cout << "Encryption finished!" << foo << std::endl;
            } else std::cerr << "Error: Write correct password" << std::endl;
        }
    } else if (mode == "decryption") {
        std::string enc3, enc4;
        int pass2;
        enc3 += enc4;
        if (enc3.size() > 248) std::cerr << "Error: Write correct string (<=248)" << std::endl;
        else {
            std::cout << "Please, enter password: " << std::endl;
            if (std::cin >> pass2) {
                std::string key1 = std::to_string(a);
                std::string pass = std::to_string(pass2);
                std::bitset<16> m(key);
                std::string text_input;
                for (int i = 0; i < text_input.size(); i++) {}
                int block;
                int block_encrypt =
                        (block >> shift) | (block << (16 - shift));
                unsigned int block_gamma =
                        (block_encrypt << shift) | (block_encrypt >> (16 - shift)); // Сдвиг с наложением маски
                unsigned int block1 = block_gamma ^ gamma;
                unsigned int l = block1 >> 8;
                std::cout << "Decryption finished! Your phrase is " << l << std::endl;
            } else std::cerr << "Error: Write correct password" << std::endl;
        }
    } else std::cerr << "Error: Write correct filename" << std::endl;
}

