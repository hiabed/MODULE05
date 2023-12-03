#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form &other);
    Form &operator=(const Form &other);
    const std::string getName() const;
    bool isSigned() const;
    const int getGradeToSign() const;
    const int getGradeToExecute() const;
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
    public:
        const char *what() const throw();
    };
    ~Form();
};

#endif
