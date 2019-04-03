#ifndef STU_H_INCLUDED
#define STU_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>//c-style string operation
#include <cctype>//isanum,isalpha
#include <vector>//container
#include <stdexcept> //runtime_error 等错误提示
#include <fstream> //文件读入
#include <sstream> //
#include <math.h>
using namespace std;

struct stu
{
private:
    char *name,*home,*tel,*email;
public:
    static int number;
    stu(char*,char*,char*,char*);
    ~stu();
    void print();
    void freespace(void);
};

#endif // STU_H_INCLUDED
