#include <iostream>

using namespace std;

int main()
{
    int H,W;
    cin>>H>>W;

     int r[2], c[2];
     int k = 0;

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
         char x;
         cin>>x;
            if(x=='o'){
            r[k] = i;
            c[k] = j;
            k++;
            }
        }

    }
    cout << abs(r[0] - r[1]) + abs(c[0] - c[1]) << endl;

    return 0;
}
