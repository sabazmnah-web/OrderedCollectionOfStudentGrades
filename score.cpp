#include <iostream>
#include "score.h"

Score::Score() {
    value = 0;
}

Score::Score(int val) {
    value = val;
}

void Score::Print() const {
    std::cout << value << std::endl;
}

bool Score::operator>(const Score& other) const {
    return this->value > other.value;
}

bool Score::operator<(const Score& other) const {
    return this->value < other.value;
}

bool Score::operator==(const Score& other) const {
    return this->value == other.value;
}

bool Score::operator!=(const Score& other) const {
    return this->value != other.value;
}
