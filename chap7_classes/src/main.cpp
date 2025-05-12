#include "sales_data.hpp"

int main(int argc, char **argv)
{
    ostream *os = &cout;
    Sales_data data1("12345", 10, 20.0);
    Sales_data data2("67890", 5, 30.0);
    Sales_data result;

    result = add(data1, data2);

    print(*os, result);

    return 0;
}