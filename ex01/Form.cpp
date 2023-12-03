#include "Form.hpp"

Form::Form():_name("Abed"), _gradeToSign(5), _gradeToExecute(3)
{
    _isSigned = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _isSigned = false;
}

Form::Form(const Form &other):_name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    *this = other;
}

Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return *this;
}