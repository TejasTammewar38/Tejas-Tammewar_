#include <iostream>

int main() {
    int days;
    float roomChargePerDay, foodCharge, total;

    std::cout << "Enter number of days stayed: ";
    std::cin >> days;

    std::cout << "Enter room charge per day: ";
    std::cin >> roomChargePerDay;

    std::cout << "Enter total food charges: ";
    std::cin >> foodCharge;

    total = (days * roomChargePerDay) + foodCharge;

    std::cout << "Total Hotel Bill: " << total << std::endl;

    return 0;
}
