using namespace std;
int solution(int n, int k) {
    int t = n / 10;
    return t == 0 ? n * 12000 + k * 2000 : n * 12000 + (k-t) * 2000;
}