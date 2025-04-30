#include <iostream>

struct MotorStruct
{
    int id_;
    int pos_;
    int vel_;
    int torque_;
};

int main()
{
    std::cout << "Hello, World!" << std::endl;

    MotorStruct motor_data;
    motor_data.id_ = 0;
    motor_data.pos_ = 1000;
    motor_data.vel_ = 2000;
    motor_data.torque_ = 3000;

    MotorStruct* ptr;

    MotorStruct &ref = motor_data;

    ptr = &motor_data;

    using std::cout;
    using std::endl;

    cout << "Use pointer to access the struct" << endl;
    cout << "Motor ID: " << (*ptr).id_ << endl;
    cout << "Motor Position : " << (*ptr).pos_ << endl;

    cout << "Motor ID: " << ptr->id_ << endl;
    cout << "Motor Position : " << ptr->pos_ << endl;

    cout << "Use reference to access the struct "<< endl;
    cout << "Motor ID: " << ref.id_ << endl;
    cout << "Motor Position : " << ref.pos_ << endl;

    return 0;
}