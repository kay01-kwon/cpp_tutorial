#include "sales_data.hpp"

Sales_data::Sales_data():bookNo_{}, units_sold_{0}, revenue_{0.0}
{
    cout << "Default constructor called" << endl;   
}

Sales_data::Sales_data(const string &s, unsigned n, double p)
:bookNo_{s}, units_sold_{n}, revenue_{p*n}
{
    cout << "Constructor with three parameters called" << endl;
}

 Sales_data::Sales_data(const string &s)
 :bookNo_{s}, units_sold_{0}, revenue_{0.0}
 {
    cout << "Constructor with one parameter called" << endl;
 }

 Sales_data::Sales_data(istream &is)
 {
    cout << "Constructor with istream parameter called" << endl;
    is >> bookNo_ >> units_sold_ >> revenue_;
    if (is)
    {
        revenue_ = units_sold_ * revenue_;
    }
    else
    {
        bookNo_ = "";
        units_sold_ = 0;
        revenue_ = 0.0;
    }
 }

 string Sales_data::isbn() const
 {
    cout << "isbn() called" << endl;
    return bookNo_;
 }

 Sales_data & Sales_data::combine(const Sales_data &rhs)
 {
    cout << "combine() called" << endl;
    units_sold_ += rhs.units_sold_;
    revenue_ += rhs.revenue_;
    return *this;
 }

double Sales_data::avg_price() const
{
    cout << "avg_price() called" << endl;
    return units_sold_ ? revenue_ / units_sold_ : 0.0;
}

Sales_data add(const Sales_data& lhs,
                const Sales_data& rhs)
{
    cout << "add() called" << endl;
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream &read(istream &is,
                Sales_data &item)
{
    cout << "read() called" << endl;
    double price = item.avg_price();
    is >> item.bookNo_ >> item.units_sold_ >> price;
    item.revenue_ = item.units_sold_ * price;
    return is;
}

ostream &print(ostream &os,
                const Sales_data& item)
{
    cout << "print() called" << endl;
    os << item.isbn() << " " << item.units_sold_ << " "
       << item.revenue_ << " " << item.avg_price()
       << endl;
    return os;
}