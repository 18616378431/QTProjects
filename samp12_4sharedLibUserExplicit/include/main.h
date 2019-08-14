#ifndef MAIN_H
#define MAIN_H

#include "samp12_4sharelibfunc_global.h"

//共享库函数
//计算x * 3并返回
int tripe(int x) Q_DECL_EXPORT;

class SAMP12_4SHARELIBFUNCSHARED_EXPORT main
{

public:
    main();
};

#endif // MAIN_H
