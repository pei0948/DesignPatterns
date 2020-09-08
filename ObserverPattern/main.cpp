#include "ConcreteObserver.hpp"
#include "Observer.hpp"
#include "Subject.hpp"
#include "ConcreteSubject.hpp"
int main(int argc, char *argv[])
{
				Subject *s=new ConcreteSubject();
				Observer *o1=new ConcreteObserver("1", s);
				Observer *o2=new ConcreteObserver("2", s);

				s->addObserver(o1);
				s->addObserver(o2);

				s->setSubjectStatus("status change");
				s->notify();
				return 0;
}
