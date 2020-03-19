module;
#include <iostream>
#include <memory>
#include <thread>
#include <chrono>

export module pack_car;

import wheel;
import drivechain;
import engine;
import wheel_detail;
import drivechain_detail;
import engine_detail;

export class car
{
public: 
    car();
    void drive();

private:
    unsigned int const gas_;
    std::unique_ptr<const wheel> const wheel_;
    std::unique_ptr<const drivechain> const drivechain_;
    std::unique_ptr<const engine> const engine_;
};

car::car() :
    gas_(10),
    wheel_(std::make_unique<wheel_impl>(4)),
    drivechain_(std::make_unique<drivechain_impl>(wheel_.get())),
    engine_(std::make_unique<engine_impl>(drivechain_.get()))
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

export void do_car() {
    car instance;
    instance.drive();
}