#include <iostream>
using namespace std;
int Uppercase(const string& text) 
{
  int count = 0;
  for (char c : text) 
  {
    if (c >= 'A' && c <= 'Z') 
	{
      count++;
    }
  }
  return count;
}
int main() 
{
  string AI = {" Artificial Intelligence is Intelligence demonstrated by machines, as opposed to the natural intelligence displayed by animals  and humans."};
  int numUppercase = Uppercase(AI);
  cout << "Number of uppercase alphabets: " << numUppercase <<endl;
  return 0;
}