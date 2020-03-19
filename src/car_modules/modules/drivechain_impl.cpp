module;
#include <stdexcept>
#include <iostream>

export module drivechain_detail;
import drivechain;
import wheel;

export class drivechain_impl : public drivechain
{
public: 
    drivechain_impl(wheel const * const wheels);
    void spin_wheels() const final;

private: 
    wheel const * const wheels_;

};

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
