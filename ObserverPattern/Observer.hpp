#ifndef OBSERVER
#define OBSERVER

class Observer
{
	public:
					Observer(){};
					virtual ~Observer(){};
				  virtual void update()=0;
};

#endif
