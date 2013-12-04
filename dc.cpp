#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

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

int validateInput(char m_choice)
{
  int num_choice = -1;
  switch(m_choice){
    case 1:
      num_choice=1;
      break;
    case 2:
      num_choice=2;
      break;
    case 'S': case 's':
      num_choice=3;
      break;
    case 'E': case 'e':
      num_choice=4;
      break;
    case 'M': case 'm':
      num_choice=5;
      break;
    case 'C': case 'c':
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



  return num_choice;

}

int main()
{
  char m_choice = displayMenu();

  int num_choice = -1;
  

  num_choice = validateInput(m_choice);
  
  cout<< "The scenario is number ="<< num_choice<< endl;
}

