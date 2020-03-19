export module wheel_detail;
import wheel;

export class wheel_impl : public wheel
{
public: 
    wheel_impl(unsigned int number_of_wheels);
    unsigned int get_number_of_wheels() const final;

private:
    unsigned int const number_of_wheels_;

};

wheel_impl::wheel_impl(unsigned int const number_of_wheels) :
    number_of_wheels_(number_of_wheels)
{
}

unsigned int wheel_impl::get_number_of_wheels() const
{
    return number_of_wheels_;
}
