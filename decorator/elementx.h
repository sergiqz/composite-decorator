#ifndef ELEMENTX_H
#define ELEMENTX_H
#include "decorator.h"
#include <QPainter>
#include <QImage>

class elementx: public decorator
{
  public:
    elementx(widget *w): decorator(w){}
    void do_this()
    {
        cout << " elementx" << endl;
        decorator::do_this();
    }
    void drawMe(QPainter *DrawHere){
      QImage image1 ("C:/Users/Admin/Desktop/programacion 3/avatar ahora si/avatar/build-avatar-Desktop_Qt_5_2_0_MinGW_32bit-Debug/cara1.png");
      DrawHere->drawImage(30,30,image1);
    }
};

#endif // ELEMENTX_H
