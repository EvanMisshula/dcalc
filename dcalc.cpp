#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int x1 = 0;
int x2 = 0;
int y1 = 0;
int y2 = 0;
int distance = 0;
int choice;

int main()
{
    cout <<"========3D Distance Calculator=========="<< endl;
    cout <<"[1] Change the first point" << endl;
    cout <<"[2] Change the second point"<< endl;
    cout <<"[S/s] Display the current two points"<< endl;
    cout <<"[E/e] Calculate and display the Euclidean Distance between the two points"<< endl;
    cout <<"[M/m] Calculate and display the Manhattan Distance between the two points"<< endl;
    cout <<"[C/c] Calculate and display the Chebyshev Distance between the two points"<< endl;
    cout <<"[Q/q] Quit the program\n\n";
    cout <<"Enter your choice : \n" << endl;
    cin >> choice;

switch(distance){
    case 1:
    case 2:
    case S || s:
    case E || e: {
       double x1, y1, x2, y2;
    double dist;
    cout<<"Enter x value of first coordinate "<<endl;           
    cin>>x1;
    cout<<"Enter y value of first coordinate "<<endl;
    cin>>y1;
    cout<<"Enter x value of second coordinate "<<endl;
    cin>>x2;
    cout<<"Enter y value of second coordinate "<<endl;
    cin>>y2;

    dist = distanceCalculate(x1, y1 , x2, y2);          
    cout<<"Distance Between ("<<x1<<" , "<<y1<<") and ("<<x2<<" , "<<y2<<") = "<<dist;
    }//end case E || e

    case M || m:{
        
    }//end case M || m
    
    case C || c:{
    }//end case C || c

    case Q || q:
       break;
}





    system("PAUSE");
    return 0;
}


double distanceCalculate(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    double dist;

    dist = pow(x,2)+pow(y,2);       
    dist = sqrt(dist);                  

    return dist;
}
