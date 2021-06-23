#include <iostream>
using namespace std;

char grid [3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'x';
void display(){
    for (int i = 0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << grid[i][j]<< " ";
        }
    cout << endl;
    }

}
void input(){
}

int main()
{

display();
    return 0;
}
