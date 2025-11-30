#include <vector>
#include <iostream>

using namespace std;

class Rect {
private:
    vector<vector<int>> rec;
public:
    Rect() : rec({ { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }) {}
    void printRect() {
        cout << "모서리1 : " << rec[0][0] << ", " << rec[0][1] << endl;
        cout << "모서리2 : " << rec[1][0] << ", " << rec[1][1] << endl;
        cout << "모서리3 : " << rec[2][0] << ", " << rec[2][1] << endl;
        cout << "모서리4 : " << rec[3][0] << ", " << rec[3][1] << endl;
        cout << endl;
    }

    void setR1(int a, int b) { rec[0][0] = a; rec[0][1] = b; }
    void setR2(int a, int b) { rec[1][0] = a; rec[1][1] = b; }
    void setR3(int a, int b) { rec[2][0] = a; rec[2][1] = b; }
    void setR4(int a, int b) { rec[3][0] = a; rec[3][1] = b; }
};

int main()
{
    Rect r1;
    r1.printRect();

    r1.setR1(3, 5);
    r1.setR2(7, 8);
    r1.setR3(-3, -5);
    r1.setR4(1, -1);
    r1.printRect();
}
