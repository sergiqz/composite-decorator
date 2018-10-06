#ifndef ELEMENTY_H
#define ELEMENTY_H
#include "decorator.h"

class elementy: public decorator
{
  public:
    elementy(widget *w): decorator(w){}
    void do_this()
    {
        decorator::do_this();
        cout << " elementy" << endl;
    }
};
#endif // ELEMENTY_H
