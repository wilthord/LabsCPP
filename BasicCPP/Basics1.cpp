#include <limits>
#include <iostream>

int main()
{

    unsigned short number {16387};

    std::cout << "The short value is " << number << std::endl;

    auto result{ static_cast<unsigned short>(number << 2) }; // Shift left two bit positions

    std::cout << "after the bit shift  " << result << std::endl;

    result = static_cast<unsigned short>(result >> 2); // Shift left two bit positions

    std::cout << "after the bit shift  " << ~result << std::endl;

    
}