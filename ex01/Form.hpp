#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    Form();
    Form(std::string name, bool _signed, int gradeToSign, int gradeToExecute);
    Form(const Form &other);
    Form &operator=(const Form &other);
    const std::string getName() const;
    bool isSigned() const;
    const int getGradeToSign() const;
    const int getGradeToExecute() const;
    class GradeTooHighException: public Bureaucrat::GradeTooHighException
    {
        //optional;
    };
    class GradeTooLowException: public Bureaucrat::GradeTooLowException
    {
        //optional;
    };
    ~Form();
};

#endif

