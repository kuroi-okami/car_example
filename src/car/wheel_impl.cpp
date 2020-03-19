#include "wheel_impl.hpp"
#include "iostream"

wheel_impl::wheel_impl(unsigned int const number_of_wheels) :
    number_of_wheels_(number_of_wheels)
{
}

unsigned int wheel_impl::get_number_of_wheels() const
{
    return number_of_wheels_;
}
