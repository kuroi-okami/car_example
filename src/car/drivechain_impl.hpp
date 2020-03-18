#ifndef SRC_CAR_DRIVECHAIN_IMPL_HPP
#define SRC_CAR_DRIVECHAIN_IMPL_HPP

#include "drivechain.hpp"
#include "wheel.hpp"

class drivechain_impl : public drivechain
{
public: 
    drivechain_impl(wheel const * const wheels);
    void spin_wheels() const final;

private: 
    wheel const * const wheels_;

};

#endif
