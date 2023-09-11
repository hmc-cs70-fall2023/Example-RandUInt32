#include <cs70/randuint32.hpp>
#include <cstddef>
#include <iostream>

constexpr size_t TOTAL_ROLLS = 6000;
constexpr size_t DICE_SIDES = 6;

int main() {
    RandUInt32 rand;

    size_t counts[DICE_SIDES] = {0, 0, 0, 0, 0, 0};
    for (size_t i = 0; i < TOTAL_ROLLS; ++i) {
        size_t roll = rand.get(DICE_SIDES);
        ++counts[roll];
    }

    std::cout << "Results from " << TOTAL_ROLLS << " dice rolls" << std::endl;
    for (size_t i = 0; i < DICE_SIDES; ++i) {
        std::cout << i << "\t" << counts[i] << std::endl;
    }
    return 0;
}
