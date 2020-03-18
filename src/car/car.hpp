#ifndef SRC_CAR_CAR_HPP
#define SRC_CAR_CAR_HPP

#include <memory>
#include "wheel.hpp"
#include "engine.hpp"
#include "drivechain.hpp"

class car 
{
public: 
    car();
    void drive();

private:
    unsigned int const gas_;
    std::shared_ptr<const wheel> const wheel_;
    std::shared_ptr<const drivechain> const drivechain_;
    std::shared_ptr<const engine> const engine_;
};

#endif
