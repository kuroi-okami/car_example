#include "drivechain_impl.hpp"
#include <stdexcept>
#include <iostream>

drivechain_impl::drivechain_impl(wheel const * const  wheels) :
    wheels_(wheels)
{
    if(wheels_ == nullptr)
    {
        throw std::runtime_error("wheels is an invalid ptr");
    }
}

void drivechain_impl::spin_wheels() const 
{
    std::cout 
        << wheels_->get_number_of_wheels()
        << " wheels go VRRROOOOOM!"
        << std::endl;
}