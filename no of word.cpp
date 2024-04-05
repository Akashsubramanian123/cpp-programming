#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string a= "Machine Learning (ML) is a kind of AI (Artificial Intelligence) that lets software application become more practice at anticipating results without being specifically programmed to do so. Machine Learning algortihms utilize historical data as input to anticipate/predict the latest output values.";
    int count = 0;
    for (int i = 0; i < a.length(); i++) 
	{
        if (a[i] == ' ') 
		{
            count++;
        }
    	if(a[i]==' '&&a[i-1]==' ')
    	{
    		count--;
		}
    }
    if (a[0] == ' ') 
	{
        --count;
    }
    cout << "The number of words in the input is: " << count <<endl;
    return 0;
}