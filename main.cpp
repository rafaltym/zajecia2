#include <iostream>

using namespace std;

int main()
{

    int w;
    cout<<" podaj liczbe wierszy"<<endl;
    cin>>w;

    for(int i=0; i<=w;i++)
    {
        for(int j=0;j<w-i;j++)
        {
            cout<<" ";

        }
        for(int k=1; k<(i*2-2);k++)
        {
            cout<<"x ";
        }
        cout<<endl;
    }


    return 0;
}
