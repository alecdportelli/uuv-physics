#include <iostream>
#include "UUV-Physics/state.hpp"

int main(){
    std::cout << "*******************" << std::endl;
    std::cout << "UUV Physics Engine" << std::endl;
    std::cout << "*******************" << std::endl;

    //
    // Test stuff below
    //

    State s;
    s.position << 1, 2, 3;
    s.rotation << 4, 5, 6;
    s.linear_velocity << 7, 8, 9;
    s.angular_velocity << 10, 11, 12;

    return 0;
}