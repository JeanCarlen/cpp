#include "Bureaucrat.hpp"
#include "Form.hpp"
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
		std::cerr << "error: " << e.what() << '\n';
	}
	try
	{
		f->beSigned(*chief);
		chief->executeForm(*f);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << "\n--------1--------\n\n";
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
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
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << "\n----------------\n\n";
	try
	{
		s->beSigned(*hand);
		s->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: "<< e.what() << '\n';
	}
	std::cout << "\n----------------\n\n";
	delete chief;
	delete hand;
	delete f;
	delete r;
	delete s;
	std::cout << "\n----------------\n\n";
	return (0);
}