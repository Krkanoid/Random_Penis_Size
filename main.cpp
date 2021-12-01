#include <iostream>

void pp() {
    char gas[10] = "=";
    for(int i = 0; i < 1; i++) {
        int rand_num = rand() % 21 + 0;
        if(rand_num == 0) {
            std::cout << "HAHA imaš vaginu!" << std::endl;
        } else if(rand_num == 20) {
            std::cout << "Imaš pre velik penis ne stane tu!" << std::endl;
        } else {
            std::cout << "8";
            for(int j = 0; j <= rand_num; j++) {
                std::cout << gas;
            }
            std::cout << ">";
        }
        putchar('\n');
    }
}

int main() {
    int user;
    while(true) {
        std::cout << "Unesi odgovor: " << std::endl;
        std::cin >> user;
        if(user == 1 or user == 2) {
            pp();
        } else {
            break;
        }
    }
    return 0;
}
