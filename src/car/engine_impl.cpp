#include "engine_impl.hpp"
#include <stdexcept>


engine_impl::engine_impl(drivechain const * const drivechain) :
    drivechain_(drivechain)
{
    if(drivechain_ == nullptr)
    {
        throw std::runtime_error("drivechain is an invalid ptr");
    }
}


void engine_impl::activate_drivechain() const
{
    drivechain_->spin_wheels();
}