#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void guess()
{
    int  num, guess, tries = 0;
    srand(time(0));
	num = rand() % 1000 + 1;
    cout<<num<<endl;
    bool a=true;
    while(a)
	{
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!"<<endl;
		else if (guess < num)
			cout << "Too low!"<<endl;
		else
			cout << "Excellent! you guessed the number in  " << tries << " guesses!"<<endl;
            break;
    }
}
int main()
{
	cout << "Guess My Number Game"<<endl;
    guess();
    while (true)
    {
        cout<< "would you like to play again? yes or no" <<endl;
        string str;
        cin>>str;
        if(str == "YES" || str == "yes")
        {
            guess();
        }
        else{
            break;
        }
    }
	return 0;
}