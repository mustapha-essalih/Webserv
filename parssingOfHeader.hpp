#ifndef PARSSINGOFHEADER_HPP
#define PARSSINGOFHEADER_HPP

// #include "clients_obj.hpp"
#include <iostream>
 
class parssingOfHeader
{
    private:

    public:

        parssingOfHeader();

        long long	ft_atoi(const char *str);

        int checkHeaderOfreq_(std::string, int &);
        int checkHeaderLine(std::string, int &);
        int checkHeaders(int index, std::string, int &);
        ~parssingOfHeader();
};
 

#endif