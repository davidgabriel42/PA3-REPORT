// reading a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double eval(int *pj);


int main ()
{
  int vec[150];
  int i = 0;


  ifstream File;
  File.open("input.txt");

  while(!File.eof())
  {
    File >> vec[i];
    i++;
  }

  double fitness;
  fitness = eval(vec);

  ofstream myfile_out;
  myfile_out.open ("fitness_out.txt");


  myfile_out << fitness << endl;
  myfile_out.close();
  return 0;  

}

