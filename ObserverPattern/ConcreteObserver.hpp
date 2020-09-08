#ifndef CONCRETE_OBSERVER
#define CONCRETE_OBSERVER

#include "Observer.hpp"
#include "Subject.hpp"
#include "iostream"
using namespace std;

class ConcreteObserver:public Observer
{
				public:
								ConcreteObserver(string name, Subject *sub);
								void update();

				private:
								string name;
								string observerStatus;
								Subject *sub;
				private:
								virtual ~ConcreteObserver(){};
};

void ConcreteObserver::update()
{
				observerStatus=sub->getSubjectStatus();
			  cout<<name<<" "<<observerStatus<<endl;
}
ConcreteObserver::ConcreteObserver(string name, Subject *sub)
{
				this->name=name;
				this->sub=sub;
}
#endif
