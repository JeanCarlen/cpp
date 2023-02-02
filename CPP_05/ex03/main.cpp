#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat *chief = new Bureaucrat("CEO", 1);
	Bureaucrat *hand = new Bureaucrat("Chief", 22);
	PresidentialPardonForm	*f = new PresidentialPardonForm("bob");
	RobotomyRequestForm		*r = new RobotomyRequestForm("billy");
	ShrubberyCreationForm	*s = new ShrubberyCreationForm("tree");
	std::cout << "\n----------------\n\n";
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 1: " << e.what() << '\n';
	}
	try
	{
		f->beSigned(*hand);
		f->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 2: " << e.what() << '\n';
	}
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 3: " << e.what() << '\n';
	}
	std::cout << "\n----------------\n\n";
	try
	{
		r->beSigned(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 4: " << e.what() << '\n';
	}
	std::cout << "\n----------------\n\n";
	try
	{
		s->beSigned(*hand);
		s->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 5: "<< e.what() << '\n';
	}
	std::cout << "\n----------------\n\n";
	delete chief;
	delete hand;
	delete f;
	delete r;
	delete s;
	std::cout << "\n----------------\n\n";

	{
	std::cout << "Intern sutff:\n\n";
    Intern  someRandomIntern;
    Form*   rrf;
	Form*	ffs;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender"); 
	ffs = someRandomIntern.makeForm("FFS request", "Billy bob");

	delete rrf;
	}

	return (0);
}