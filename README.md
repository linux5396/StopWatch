# StopWatch
a c++ timecost lib . list some example below:

```
#include "StopWatch.h"//ref head file
using namespace std;
int main(int argc, char **argv) {
    StopWatch stopWatch;
    rawIO();//this is your call function.
    cout << "elapse ms:" << stopWatch.ElapsedMs() << endl;
    cout << "elapse us:" << stopWatch.ElapsedUs() << endl;

    stopWatch.Restart();
    cacheIO();//this is your call function.
    cout << "-elapse ms:" << stopWatch.ElapsedMs() << endl;
    cout << "-elapse us:" << stopWatch.ElapsedUs() << endl;
    return 0;
}
```
