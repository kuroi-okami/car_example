#ifndef SRC_CAR_ENGINE_IMPL_HPP
#define SRC_CAR_ENGINE_IMPL_HPP

#include "engine.hpp"
#include "drivechain.hpp"

class engine_impl : public engine
{
public: 
    engine_impl(drivechain const * const drivechain);
    void activate_drivechain() const final;

private:
    drivechain const * const drivechain_;
};

#endif
