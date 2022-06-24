#include <iostream>

using namespace std;

class player{
    public:
        string nama;
        int power;

        player(string isiNama, int isiPower) {
            this->nama = isiNama;
            this->power = isiPower;
        }

        void tampilkan();
        void getNama();
        void getPower();
        void gantiNama(string);
        void gantiPower(int);
};

int main(int argc, char const *argv[])
{
    player* player1 = new player("hanzah", 100);
    player1->gantiPower(400);
    player1->tampilkan();
    return 0;
}


// MENJABARKAN METHOD
void player::tampilkan() {
    cout << "NAMA: " << this->nama << endl;
    cout << "POWER: " << this->power << endl;
}

void player::getNama() {
    cout << "NAMA: " << this->nama << endl;
}

void player::getPower() {
    cout << "NAMA: " << this->power << endl;
}

void player::gantiNama(string isiGantiNama) {
    this->nama = isiGantiNama;
}

void player::gantiPower(int isiGantiPower) {
    this->power = isiGantiPower;
}
