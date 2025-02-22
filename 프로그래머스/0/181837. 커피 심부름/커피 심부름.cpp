#include <string>
#include <vector>
using namespace std;
int solution(vector<string> order) {
    int price = 0;
    for(auto &k: order){
        if(k == "iceamericano" || k =="americanoice" || k == "hotamericano" || k == "americanohot" || k == "anything" || k == "americano") price += 4500;
        else if(k == "icecafelatte" || k =="cafelatteice" || k == "hotcafelatte" || k == "cafelattehot" || k == "cafelatte") price += 5000;
    }
    return price;
}