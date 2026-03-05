#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;

    cout << "1 ile 100 arasinda sayi tahmin et: ";

    while(true) {
        cin >> guess;

        if(guess > randomNumber)
            cout << "Daha kucuk bir sayi dene: ";
        else if(guess < randomNumber)
            cout << "Daha buyuk bir sayi dene: ";
        else {
            cout << "Tebrikler! Bildin.";
            break;
        }
    }

    return 0;
}
