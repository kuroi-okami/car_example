module;
#include <stdexcept>

export module engine_detail;
import engine;
import drivechain;

export class engine_impl : public engine
{
public: 
    engine_impl(drivechain const * const drivechain);
    void activate_drivechain() const final;

private:
    drivechain const * const drivechain_;
};

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
