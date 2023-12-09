#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numbers[5];

    cout << "Podaj 5 liczb oddzielonych spacjami:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }
    double average = sum / 5;

    double closestNumber = numbers[0];
    double minDifference = std::abs(numbers[0] - average);

    for (int i = 1; i < 5; ++i) {
        double difference = std::abs(numbers[i] - average);
        if (difference < minDifference) {
            minDifference = difference;
            closestNumber = numbers[i];
        }
    }

    cout << "Srednia z podanych liczb: " << average << endl;
    cout << "Liczba najblizsza sredniej: " << closestNumber << endl;

    return 0;
}