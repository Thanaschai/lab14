#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void updateImage(bool M[][M] ,int s,int X,int Y){
    for (int i = 0; i < N ;i++)
    {
        for (int j =0 ;j < ::M ;j++)
        {
            if ( sqrt((pow(i-X,2))+(pow(j-Y,2))) <= s -1){
                M[i][j] = 1 ;
            }
        }
    }

}
void showImage(const bool boo[][M]){
    cout << "------------------------------------------------------------------------" << endl ;
    for(int i = 0; i < N; i++)
    {
        cout << "|" ;
        for (int j = 0 ; j < M ; j++)
        {
            if (boo[i][j] == 0){
                cout << " " ;

            }
            else if(boo[i][j] == 1)
            {
                cout << "*";
            }
        }
        cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------" << endl ;
}