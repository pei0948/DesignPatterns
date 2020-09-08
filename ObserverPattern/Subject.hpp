#ifndef SUBJECT
#define SUBJECT

#include <list>
#include <unordered_map>
#include "Observer.hpp"
using namespace std;
class Subject
{
				public:
								Subject(){};
								virtual ~Subject(){};
								void addObserver(Observer *o);
								void removeObserver(Observer *o);
								void notify();
								virtual void setSubjectStatus(string sjs)=0;
								virtual string getSubjectStatus()=0;
				private:
								list<Observer*> observers;
								unordered_map<Observer*, list<Observer*>::iterator> loc;

};

void Subject::addObserver(Observer *o)
{
				observers.push_front(o);
				loc[o]=observers.begin();
}
void Subject::removeObserver(Observer *o)
{
				observers.erase(loc[o]);
				loc.erase(o);
}
void Subject::notify()
{
				for(Observer *o:observers)
				{
								o->update();
				}
}

#endif
