#ifndef SRC_CAR_WHEEL_IMPL_HPP
#define SRC_CAR_WHEEL_IMPL_HPP

#include "wheel.hpp"

class wheel_impl : public wheel
{
public: 
    wheel_impl(unsigned int number_of_wheels);
    unsigned int get_number_of_wheels() const final;

private:
    unsigned int const number_of_wheels_;

};

#endif
