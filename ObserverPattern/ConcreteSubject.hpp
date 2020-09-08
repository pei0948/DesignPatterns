#ifndef CONCRETE_SUBJECT
#define CONCRETE_SUBJECT

#include "Subject.hpp"
class ConcreteSubject:public Subject
{
				private:
								string subjectStatus;
				public:
								void setSubjectStatus(string sjs);
								string getSubjectStatus();

};

void ConcreteSubject::setSubjectStatus(string sjs)
{
				subjectStatus=sjs;
}
string ConcreteSubject::getSubjectStatus()
{
				return subjectStatus;
}


#endif
