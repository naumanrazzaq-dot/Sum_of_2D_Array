#include <iostream>

using namespace std;

int main()
{
   int matrix[3][2] = {
    {5, 10},
    {2, 4},
    {3, 1}
};
int sum=0;
int row=3;
int col=2;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    cout<<sum;
    return 0;
}
