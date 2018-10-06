#ifndef ELEMENTZ_H
#define ELEMENTZ_H
#include "decorator.h"
class elementz: public decorator
{
  public:
    elementz(widget *w): decorator(w){}
    void do_this()
    {
        decorator::do_this();
        cout << " elementz" << endl;
    }
};

#endif // ELEMENTZ_H
