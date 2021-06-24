#include <iostream>
using namespace std;

char grid [3][3] = {'1','2','3','4','5','6','7','8','9'};
char spiller = 'x';
void display(){
    for (int i = 0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << grid[i][j]<< " ";
        }
    cout << endl;
    }

}
void input(){
    int plass;
cout<<"legg inn nr av plassen du vil spille på" <<endl;
cin >> plass;
switch(plass){
    case 1:
        matrix[0][0] = spiller;
        break;
    case 2:
        matrix[0][1] = spiller;
        break;
    case 3:
        matrix[0][2] = spiller;
        break;
    case 4:
        matrix[1][0] = spiller;
        break;
    case 5:
        matrix[1][1] = spiller;
        break;
    case 6:
        matrix[1][2] = spiller;
        break;
    case 7:
        matrix[2][0] = spiller;
        break;
    case 8:
        matrix[2][1] = spiller;
        break;
    case 9:
        matrix[2][2] = spiller;
        break;

}

}

int main()
{

display();
    return 0;
}
