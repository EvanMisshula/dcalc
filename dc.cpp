#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

void calcChebyshevDist(float &x1, float &y1, float &z1,float &x2, float &y2, float &z2)
{
  
  float dc = -1.0;
  float temp = 0.0;
  
  temp = max(abs (x2-x1), abs (y2-y1)) ;
  dc = max(temp, abs (z2-z1));
  
  printf("The Chebyshev distance between ( %10.4f, %10.4f, %10.4f ) and ( %10.4f, %10.4f, %10.4f ) is %10.4f.\n", x1, y1, z1, x2, y2, z2, dc);

}
void calcManhattanDist(float &x1, float &y1, float &z1,float &x2, float &y2, float &z2)
{
  
  float dm= -1.0;

  dm= abs (x2-x1)+abs (y2-y1)+abs (z2-z1);
  
  printf("The Manhattan distance between ( %10.4f, %10.4f, %10.4f ) and ( %10.4f, %10.4f, %10.4f ) is %10.4f.\n", x1, y1, z1, x2, y2, z2, dm);

}

void calcEuclideanDist(float &x1, float &y1, float &z1,float &x2, float &y2, float &z2)
{
  
  float de= -1.0;

  de= sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
  
  printf("The Euclidean distance between ( %10.4f, %10.4f, %10.4f ) and ( %10.4f, %10.4f, %10.4f ) is %10.4f.\n", x1, y1, z1, x2, y2, z2, de);

}


void displayPoints(float &x1, float &y1, float &z1,float &x2, float &y2, float &z2)
{
  printf("The first point is ( %10.4f, %10.4f, %10.4f ).\n", x1, y1, z1);
  printf("The second point is ( %10.4f, %10.4f, %10.4f ).\n", x2, y2, z2);
  
}
void updatePt(float &x, float &y, float &z)
// Swaps x and y data of calling function
{
  cout<<"Enter the x-coordinate"<<endl;
  cin>>x;
  cout<<"Enter the y-coordinate"<<endl;
  cin>>y;
  cout<<"Enter the z-coordinate"<<endl;
  cin>>z;
}

char displayMenu()
{
  char choice = 'z';

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
    
    char &choice_made = choice;
    return choice_made;

}

int * validateInput(char m_choice,
		    float &x1,
		    float &y1,
		    float &z1,
		    float &x2,
		    float &y2,
		    float &z2
		    )
{
  cout<<"in the fcn, m_choice="<<m_choice<<endl;
  int num_choice = -1;
  switch(m_choice){
    case '1':
      num_choice=1;
      cout<<"we are in case 1"<<endl;
      cout<<"point 1 was ("<<x1<<", "<<y1<<", "<<z1<<")"<<endl;
      updatePt(x1,y1,z1);
      cout<<"point 1 is ("<<x1<<", "<<y1<<", "<<z1<<")"<<endl;

      break;
    case '2':
      num_choice=2;
      cout<<"we are in case 2"<<endl;
      cout<<"point 2 was ("<<x2<<", "<<y2<<", "<<z2<<")"<<endl;
      updatePt(x2,y2,z2);
      cout<<"point 2 is ("<<x2<<", "<<y2<<", "<<z2<<")"<<endl;
      break;
    case 'S': case 's':
      displayPoints(x1,y1,z1,x2,y2,z2);
      num_choice=3;
      break;
    case 'E': case 'e':
      calcEuclideanDist(x1,y1,z1,x2,y2,z2);
      num_choice=4;
      break;
    case 'M': case 'm':
      calcManhattanDist(x1,y1,z1,x2,y2,z2);
      num_choice=5;
      break;
    case 'C': case 'c':
     calcChebyshevDist(x1,y1,z1,x2,y2,z2);
      num_choice=6;
      break;
    case 'Q': case 'q':
      num_choice=7;
      break;
  default :
    cout << "you have entered invalid data:" << m_choice<< endl;
    num_choice=-1;
    break;
    }

  int *valid_input=&num_choice;


  return valid_input;

}

int main()
{
  float x1=0.0,y1=0.0,z1=0.0,x2=1.0,y2=0.0,z2=0.0;

  char m_choice = displayMenu();
  int num_choice = *validateInput(m_choice,
				  x1,y1,z1,
				  x2,y2,z2);
  
  cout<< "The scenario is number ="<< num_choice<< endl;
}

