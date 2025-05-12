#ifndef SALES_DATA_HPP_
#define SALES_DATA_HPP_

#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;

using std::cout;
using std::endl;

class Sales_data{

    public:

        friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
        friend istream &read(istream &is, Sales_data &item);
        friend ostream &print(ostream &os, const Sales_data& item);

        Sales_data();

        Sales_data(const string &s, unsigned n, double p);

        Sales_data(const string &s);
        
        Sales_data(istream &is);

        string isbn() const;
        
        Sales_data &combine(const Sales_data &rhs);

    private:

        double avg_price() const;

        string bookNo_;

        unsigned units_sold_{0};

        double revenue_{0.0};
};

Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

istream &read(istream &is, Sales_data &item);

ostream &print(ostream &os, const Sales_data& item);

#endif // SALES_DATA_HPP_