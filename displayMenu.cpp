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
