#include <iostream>
#include <string>
#include "include/upload.h"
#include <fstream>
using namespace std;
int main(void)
{
    //Upload U;
    FILE *fn;
    string url="https://api.github.com/repos/tojijk/testing/contents/ap6.txt";
    string agent="tojijk", user_pwd="tojijk:spell@404";
    findNew(url, user_pwd, agent);
    return 0;
}
