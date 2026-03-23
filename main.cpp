#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    // TODO: prompt user for begin and end values
    cin >> begin >> end;
    // TODO: loop from begin to end and accumulate sum of even values
    if (begin % 2 == 1 || (begin * -1) % 2 == 1){
        begin = begin + 1;
    }
    i = begin;
    while (i <= end){
       sum += i;
        i += 2;
    }

    cout << "The sum of the values is " << sum << endl;

}
