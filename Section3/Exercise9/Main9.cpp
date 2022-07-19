/*Exercise 9 - String Reversal
We’ve seen that strings are just arrays of characters. Create a char array and initialize it with any message. The char array should have a size of 30 independently of the size of your string. Output your string and reverse it using a loop and a second char array, then output the reversed string. 

Do not hard code the size of your string when looping through it.

Do this twice: one time initializing the string with double quotes, and another time initializing it with single characters.
Example output
Strings are just arrays of characters. In c++, there’s a number of ways you can initialize them, here’s two of them:

1. My string initialized with double quotes is: Hello World!
This string reversed is: !dlroW olleH

2. My string initialized with single characters is: Wtf c++
This string reversed is: ++c ftW
*/
#include<iostream>
using namespace std;
void printArray(char arr[],int ending)
{
   
    for (int i = 0; i < ending; i++)
    {  
        cout << arr[i];  
    }
    printf("\n");
}
int main()
{
    cout << "A)." << endl;
    cout << endl;
    char Arr[30] = "Ok World";//BegingA
    char ArrReversed[30];//ReverseA
    int ending;
    for (ending = 0; Arr[ending] != '\0'; ending++);
    for (int i = 0; i < ending; i++)
    {
        ArrReversed[ending - i - 1] = Arr[i];
    }
    ArrReversed[ending] = '\0';
    cout << "A. My string initialized with double quotes is: ";
    printArray(Arr, ending);
    cout << endl;
    cout << "A. This string reversed is: : ";
    printArray(ArrReversed, ending);


    cout << "B)." << endl;
    cout << endl;

    char Arr2[30]{ 'A', 'G', 'A', 'I', 'N', '\0' };//BegingB
    char ArrReversed2[30];//ReverseB
    int ending2;
    for (ending2 = 0; Arr2[ending2] != '\0'; ending2++);
    for (int i = 0; i < ending2; i++)
    {
        ArrReversed2[ending2 - i - 1] = Arr2[i];
    }
    ArrReversed2[ending2] = '\0';
    cout << "B. My string initialized with single characters is: ";
    printArray(Arr2, ending2);
    cout << "A. This string reversed is: ";
    printArray(ArrReversed2, ending2);
    return 0;

}
