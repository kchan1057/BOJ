#include <string>
#include <vector>
using namespace std;
string solution(string myString) {
    for(char &k : myString)
        if(k < 'l') k = 'l';
    return myString;
}