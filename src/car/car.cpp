#include "car.hpp"
#include "engine_impl.hpp"
#include "drivechain_impl.hpp"
#include "wheel_impl.hpp"
#include <iostream>
#include <thread>
#include <chrono>

namespace 
{
    const unsigned int number_of_wheels_default = 4;
    const unsigned int gas_default = 10;
}

car::car() :
    gas_(gas_default),
    wheel_(std::make_shared<wheel_impl>(number_of_wheels_default)),
    drivechain_(std::make_shared<drivechain_impl>(wheel_.get())),
    engine_(std::make_shared<engine_impl>(drivechain_.get()))
{
}

void car::drive()
{
    for (unsigned int i = 0; i < gas_; ++i)
    {
        engine_->activate_drivechain();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout 
        << "Out of gas"
        << std::endl;
}
